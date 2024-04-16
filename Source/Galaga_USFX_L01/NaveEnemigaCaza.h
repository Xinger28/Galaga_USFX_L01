// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Galaga_USFX_L01Projectile.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveEnemigaCaza();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void Disparar();

	float TiempoEntreProyectil;
	float TiempoPrimerProyectil;
	float VelocidadProyectil;

	
};
