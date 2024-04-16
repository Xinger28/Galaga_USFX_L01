// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Galaga_USFX_L01Projectile.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "EnemigoAeroloco.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AEnemigoAeroloco : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	AEnemigoAeroloco();

public:

    void Tick(float DeltaTime) override;

    // Function to randomly shoot a projectile at any defensive or destructor enemy ship
    void DispararProyectilAleatorio();

private:
    // Shoot a projectile towards a specific enemy ship
    void DispararProyectilHaciaNave(AActor* NaveEnemiga);

    // Projectile speed
    float VelocidadProyectil;
    float velocidad;

    // Projectile class to spawn
    TSubclassOf<AGalaga_USFX_L01Projectile> ClaseProyectil;
};
