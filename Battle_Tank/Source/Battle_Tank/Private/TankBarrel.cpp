// Fill out your copyright notice in the Description page of Project Settings.

#include "Battle_Tank/Battle_Tank.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Barrel-Elevate() called at speed: %f"),DegreesPerSecond);
}