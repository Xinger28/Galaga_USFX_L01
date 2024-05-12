// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFantasma.h"
#include "Galaga_USFX_L01Pawn.h"

ANaveEnemigaFantasma::ANaveEnemigaFantasma()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	MallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent= MallaNaveEnemiga;
	MallaNaveEnemiga -> OnComponentHit.AddDynamic(this, &ANaveEnemigaFantasma::OnHit);


	InitialLifeSpan = 10.0f;
}

void ANaveEnemigaFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = Speed * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);

	//este codigo hace que vuelva ala posicion inicial
	if (NuevaPosicion.X < LimiteInferior)
	{
		SetActorLocation(FVector(1800.0f, PosicionActual.Y, 200.0f));
	}
}

void ANaveEnemigaFantasma::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Verificar si el objeto con el que colisionó es un objeto "pawn"
	AGalaga_USFX_L01Pawn* NavePaw = Cast<AGalaga_USFX_L01Pawn>(OtherActor);
	if (NavePaw)
	{
		Destroy();
		// Codigo para crear varias naves enemigas fantasmas en lugares random de la pantalla
		for (int i = 0; i < 3; i++)
		{
			FVector Localizacion = GetActorLocation() + FVector(FMath::RandRange(-500.0f, 500.0f), FMath::RandRange(-500.0f, 500.0f), 0.0f);

			ANaveEnemigaFantasma* NuevaNaveEnemigaFantasma = GetWorld()->SpawnActor<ANaveEnemigaFantasma>(Localizacion, FRotator::ZeroRotator);

		}
	}
}
