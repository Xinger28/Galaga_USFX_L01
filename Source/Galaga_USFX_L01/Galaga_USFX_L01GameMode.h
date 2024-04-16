// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class AEnemigoAeroloco;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

protected:
	virtual void BeginPlay() override;

public:
	//ANaveEnemiga* NaveEnemiga1;
	ANaveEnemigaTransporte* NaveEnemigaTransporte1;
	ANaveEnemigaCaza* NaveEnemigaCaza1;
	AEnemigoAeroloco* EnemigoAeroloco1;
public:
	virtual void Tick(float DeltaTime) override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;

};



