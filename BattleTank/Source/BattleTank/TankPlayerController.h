// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	Atank* GetControlledTank() const;
	
	virtual void BeginPlay() override;
	
};
