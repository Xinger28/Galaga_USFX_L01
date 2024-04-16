// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "EnemigoAeroloco.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector UbicacionInicialNave = FVector(1600.0f, -200.0f, 200.0f);
	FRotator RotacionInicialNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		for (int j = 0; j < 4; j++)
		{
			FVector	PosicionActual = FVector(1100.0f, UbicacionInicialNave.Y + j * 210 , UbicacionInicialNave.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionActual, RotacionInicialNave);

			//TANavesEnemigasCaza.Add(NaveEnemigaCazaTemporal);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
		}

		for (int y = 0; y < 5; y++) {
			FVector	PosicionActual = FVector(900.0f, UbicacionInicialNave.Y + y * 210, UbicacionInicialNave.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionActual, RotacionInicialNave);

			//TANavesEnemigasCaza.Add(NaveEnemigaCazaTemporal);
			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}
		FVector PoscionActual = FVector(0.0f, -200.0f, 300.0f);
		AEnemigoAeroloco* EnemigoAerolocoTemporal = World->SpawnActor<AEnemigoAeroloco>(PoscionActual, RotacionInicialNave);

	}
}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

