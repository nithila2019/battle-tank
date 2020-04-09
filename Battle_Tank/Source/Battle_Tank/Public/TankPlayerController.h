// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include"Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLE_TANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

private:

    virtual void BeginPlay() override;

    virtual void Tick(float DeltaTime) override;
    // start moving the tank barrel so that a shot would hit where the crosshair intersects the world

    ATank* GetControlledTank() const;

    void AimTowardsCrossHair();

    bool GetSightRayHitLocation(FVector& OUT HitLocation) const;

    UPROPERTY(EditAnywhere)
    float CrosshairXLocation=0.5;

    UPROPERTY(EditAnywhere)
    float CrosshairYLocation = 0.3333;

    UPROPERTY(EditAnywhere)
    float LineTraceRange=1000000;

    bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

    bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
