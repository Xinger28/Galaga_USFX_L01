// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	TiempoEntreProyectil = 1.5f;
	TiempoPrimerProyectil = 0.0f;
	VelocidadProyectil = 1000.0f;
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = Speed * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);


	TiempoPrimerProyectil += DeltaTime;

	// Verificar si ha pasado el tiempo suficiente desde el último disparo
	if (TiempoPrimerProyectil >= TiempoEntreProyectil)
	{
		// Disparar
		Disparar();

		// Reiniciar el tiempo
		TiempoPrimerProyectil = 0.0f;
	}

	//este codigo hace que vuelva ala posicion inicial
	if (NuevaPosicion.X < LimiteInferior)
	{
		SetActorLocation(FVector(1800.0f, PosicionActual.Y, 200.0f));
	}
}

void ANaveEnemigaCaza::Disparar()
{
	// Obtén la ubicación de la nave caza para spawnear el proyectil
	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * -100 + FVector(-100.0f, 0.0f, 0.0f);//distancia de disparo

	// Spawnear el proyectil
	AGalaga_USFX_L01Projectile* NewProyectil = GetWorld()->SpawnActor<AGalaga_USFX_L01Projectile>(AGalaga_USFX_L01Projectile::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

	if (NewProyectil)
	{
		// Modificar dirección y velocidad según sea necesario
		FVector SpawnDirection = FVector(-1.0f, 0.0f, 0.0f);
		NewProyectil->SetProjectileVelocity(SpawnDirection * VelocidadProyectil);
	}
}
