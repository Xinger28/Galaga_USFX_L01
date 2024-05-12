// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GoldBall.generated.h"

class UProjectileMovementComponent;
UCLASS()
class GALAGA_USFX_L01_API AGoldBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoldBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Disparar();

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MallaBall; //Malla

	class UProjectileMovementComponent* ProjectileMovement; //Movimiento del proyectil

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CollisionBall;	//Campo de colision

	float SpeedModifierOnBounce = 1.02f; //Modificador de velocidad

private:
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult); //Cuando colisiona

	UFUNCTION()
	FVector CalculateReflectionVelocity(const FVector& CurrentVelocity, const FVector& SurfaceNormal); //Calculo de la velocidad de rebote

	UFUNCTION()
	void SetVelocity(const FVector& NewVelocity); //Establecer la velocidad

	UFUNCTION()
	void EnableCollision();

	bool bCanCollide;

	void DestroyBall(); //Destruccion de la pelota


};
