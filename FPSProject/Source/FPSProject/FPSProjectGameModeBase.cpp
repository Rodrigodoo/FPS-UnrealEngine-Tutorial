// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProjectGameModeBase.h"
#include "Engine.h"

void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();


	//Start Game Message
#if WITH_EDITOR
	//Debug Message
	if(GEngine)
	{
		//Display Debug message for five seconds
		//the -1 "Key2 value ( first argument) indicates that we will never need to update or refresh this message
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is the FPS GameMode!"));
	}
	UE_LOG(LogTemp, Warning, TEXT("Game Started!"));
#endif
}
