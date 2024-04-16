// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAeroloco.h"
#include "Kismet/GameplayStatics.h"

AEnemigoAeroloco::AEnemigoAeroloco()
{
    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    MallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

    // Set the projectile class
    ClaseProyectil = AGalaga_USFX_L01Projectile::StaticClass();
    // Set the projectile speed

    VelocidadProyectil = 1000.0f;
    velocidad = 1.0f;
}

void AEnemigoAeroloco::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento del enemigo aleatorio en el eje X	y Y pero z mantine una distancia fija
    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Genera nuevas coordenadas X e Y aleatorias
    float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
    float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;

    // Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
    FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

    // Establece la nueva posición del actor
    SetActorLocation(NuevaPosicion);

    // Disparar proyectil aleatorio
    DispararProyectilAleatorio();
}

void AEnemigoAeroloco::DispararProyectilAleatorio()
{
    // Obtener todas las instancias de NaveEnemigaDefensiva y NaveEnemigaDestructor en el mundo
    TArray<AActor*> NavesEnemigas;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveEnemigaTransporte::StaticClass(), NavesEnemigas);
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveEnemigaCaza::StaticClass(), NavesEnemigas);

    // Si hay al menos una nave enemiga en el mundo, elegir una al azar y disparar hacia ella
    if (NavesEnemigas.Num() > 0)
    {
        int32 IndiceAleatorio = FMath::RandRange(0, NavesEnemigas.Num() - 1);
        AActor* NaveEnemigaObjetivo = NavesEnemigas[IndiceAleatorio];

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando proyectil hacia nave enemiga objetivo"));
        // Disparar proyectil hacia la nave enemiga objetivo
        DispararProyectilHaciaNave(NaveEnemigaObjetivo);
    }
}

void AEnemigoAeroloco::DispararProyectilHaciaNave(AActor* NaveEnemiga)
{
    // Obtener la posición del objetivo
    FVector PosicionObjetivo = NaveEnemiga->GetActorLocation();

    // Calcular la dirección del proyectil
    FVector Direccion = PosicionObjetivo - GetActorLocation();
    Direccion.Normalize();
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("estamos aqui"));
    // Spawn the projectile
    if (ClaseProyectil)
    {
        //FVector SpawnLocation = GetActorLocation();
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100 + FVector(0.0f, 0.0f, 0.0f);
        FRotator SpawnRotation = Direccion.Rotation();
        AGalaga_USFX_L01Projectile* NewProyectil = GetWorld()->SpawnActor<AGalaga_USFX_L01Projectile>(ClaseProyectil, SpawnLocation, SpawnRotation);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Se disparo la bala"));
        if (NewProyectil)
        {
            // Set projectile velocity
            NewProyectil->SetActorRotation(SpawnRotation);
            NewProyectil->SetProjectileVelocity(Direccion * VelocidadProyectil);
        }
    }
}
