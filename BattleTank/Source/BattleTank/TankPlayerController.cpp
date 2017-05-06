// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController BeginPlay"));

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled tank is not set"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank is controlled, %s"), *(ControlledTank->GetName()));
	}
}

Atank* ATankPlayerController::GetControlledTank() const
{
	return Cast<Atank>(GetPawn());
}