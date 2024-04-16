// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS(ABSTRACT)
class GALAGA_USFX_L01_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MallaNaveEnemiga, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveEnemiga;

public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();
	float Speed;
	float LimiteInferior;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );

};
