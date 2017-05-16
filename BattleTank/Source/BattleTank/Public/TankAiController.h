// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tank.h"
#include "AIController.h"
#include "TankAiController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAiController : public AAIController
{
	GENERATED_BODY()
	
private:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledAiTank() const;

	virtual void BeginPlay() override;

	ATank* GetPlayerTank() const;

	
	
};
