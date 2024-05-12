// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IProjectilBall.h"
#include "GoldBall.h"
#include "BallAdapter.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ABallAdapter : public AActor,public IIProjectilBall
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	AGoldBall* GoldBall;

public:
	virtual void LanzarProyectil() override;

};
