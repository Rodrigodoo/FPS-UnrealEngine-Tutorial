// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCharacter.h"
#include "Engine.h"
#include "FPSProjectile.h"



// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//-----CAMERA----

	//Create a first person camera component
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));

	//Attach the Camera component to our capsule component
	FPSCameraComponent->SetupAttachment((USceneComponent*)GetCapsuleComponent());

	//Position the Camera slightly above the eyes
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, (50.0f+BaseEyeHeight)));

	//Allow the Pawn to control camera position
	FPSCameraComponent->bUsePawnControlRotation = true;

	//-----MESH-----

	//Create a first person mesh component for owning player
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));

	//Only the owning person see this mesh.
	FPSMesh->SetOnlyOwnerSee(true);

	//Attach the FPS mesh to the FPS Camera.
	FPSMesh->SetupAttachment(FPSCameraComponent);

	//Disable envoiromental shadowing for the ilusion of havinga single mesh
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	//The Owning player doesn't see the regular (third person body mesh)
	GetMesh()->SetOwnerNoSee(true);
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Start Game Message
#if WITH_EDITOR
	//Debug Message
	if (GEngine)
	{
		//Display Debug message for five seconds
		//the -1 "Key2 value ( first argument) indicates that we will never need to update or refresh this message
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("We are using the FPS Character!"));
	}
	UE_LOG(LogTemp, Warning, TEXT("FPS Character in use!"));
#endif
	
}

void AFPSCharacter::MoveForward(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::MoveRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::StartJump()
{
	if (CanJump()) //Character function that checks if player can jump
	{
		bPressedJump = true;
	}
	
}

void AFPSCharacter::StopJump()
{
	bPressedJump = false;
}

void AFPSCharacter::Fire()
{
	//Attempt to fire
	if (ProjectileClass)
	{
		//Get Camera transform
		FVector CameraLocation; //Position (X,Y,Z)
		FRotator CameraRotation; //Rotation (Pitch,Roll,Yaw)
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		//Transform MuzzelOffset from camera space to world space
		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
		FRotator MuzzleRotation = CameraRotation;

		//Skew the aim to be slightly upwards
		MuzzleRotation.Pitch += 10.0f;

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;

			//Span the projectile at the muzzle.
			AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);

			if (Projectile)
			{
				//Set the projectile's initial trajectory
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//MOVEMENT BINDINGS

	//Set up Movement Bindings
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	//Set Up Look Bindings
	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

	//Set Up Jump Bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);

	//FIRE BINDINGS

	//Set Up Firing Bindings
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
}

