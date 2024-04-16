// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
class UMovement;
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()

public:

	ANaveEnemigaTransporte();

public:

	void Tick(float DeltaTime) override;

protected:

	UMovement* MovementComponent;
};
