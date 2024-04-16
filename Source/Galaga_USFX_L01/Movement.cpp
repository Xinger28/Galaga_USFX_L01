// Fill out your copyright notice in the Description page of Project Settings.


#include "Movement.h"

// Sets default values for this component's properties
UMovement::UMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	CurrentAngle = 3.0f;
	CircularSpeed = 3.0f;
	VerticalSpeed = 30.0f;
	Radius = 5.0f;
	LimiteInferior = -1800.0f;

	// ...
}


// Called when the game starts
void UMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CurrentAngle += CircularSpeed * DeltaTime;

	// Calculate new position in XY plane
	float NewX = Radius * FMath::Cos(CurrentAngle);
	float NewY = Radius * FMath::Sin(CurrentAngle);

	// Update actor position
	FVector NewLocation = GetOwner()->GetActorLocation();
	NewLocation.X -= VerticalSpeed * DeltaTime;
	NewLocation.X = FMath::Max(NewLocation.X, LimiteInferior);
	NewLocation += FVector(NewX, NewY, 0.0f); // Keep Z position unchanged
	GetOwner()->SetActorLocation(NewLocation);
	// ...
}

