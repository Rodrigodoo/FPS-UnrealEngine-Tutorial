// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCharacter.h"
#include "Engine.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Set up Movement Bindings
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	//Set Up Look Bindings
	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

	//Set Up Jump Bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);
}

