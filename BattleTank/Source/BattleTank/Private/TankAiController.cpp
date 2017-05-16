// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAiController.h"


ATank* ATankAiController::GetControlledAiTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAiController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();

	ATank* PlayerTank = GetPlayerTank();

	if (!GetControlledAiTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("AiTank Not found"));
	}

	if (!GetPlayerTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerTank Not found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AiTankController pointing at %s"), *PlayerTank->GetName());
	}
}

void ATankAiController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//auto PlayerTankLocation = GetPlayerTank()->GetActorLocation();
	if (GetControlledAiTank()) {
		GetControlledAiTank()->AimAt(GetPlayerTank()->GetActorLocation());
	}
}
