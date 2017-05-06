// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "tank.h"


// Sets default values
Atank::Atank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Atank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Atank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

