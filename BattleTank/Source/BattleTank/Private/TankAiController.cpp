// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAiController.h"


ATank* ATankAiController::GetControlledAiTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledAITank = GetControlledAiTank();

	if (!ControlledAITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AiTankController Not possessing"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AiTankController possesing %s"), *ControlledAITank->GetName());
	}
}
