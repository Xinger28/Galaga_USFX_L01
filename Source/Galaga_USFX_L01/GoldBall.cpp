// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldBall.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AGoldBall::AGoldBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));

	MallaBall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	MallaBall->SetMaterial(0, Material.Object);
	MallaBall->SetSimulatePhysics(true);
	MallaBall->SetConstraintMode(EDOFMode::XYPlane);
	MallaBall->SetStaticMesh(BallMesh.Object);
	MallaBall->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SetRootComponent(MallaBall);
	//codigo para la la escala de la malla
	//MallaBall->SetWorldScale3D(FVector(2.5f, 2.5f, 2.5f));

	CollisionBall = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Box Collision Ball"));
	CollisionBall->SetCapsuleRadius(5.0f);
	CollisionBall->SetCapsuleHalfHeight(5.0f);
	CollisionBall->SetupAttachment(GetRootComponent());

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->InitialSpeed = 1500.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true; //La rotacion sigue la velocidad
	ProjectileMovement->bInitialVelocityInLocalSpace = true; //Velocidad inicial en espacio local
	ProjectileMovement->bShouldBounce = true; //Debe rebotar
	ProjectileMovement->Bounciness = 1.0f; //Rebote
	ProjectileMovement->Friction = 0.5f; //Friccion
	ProjectileMovement->BounceVelocityStopSimulatingThreshold = 10.0f; //Umbral de velocidad de parada de rebote
	ProjectileMovement->bSimulationEnabled = true; //Simulacion activada
	ProjectileMovement->bSweepCollision = true;
	ProjectileMovement->MaxSimulationTimeStep = 0.05;
	ProjectileMovement->MaxSimulationIterations = 12;
	ProjectileMovement->bInterpMovement = true;
	ProjectileMovement->bInterpRotation = true;
	ProjectileMovement->bConstrainToPlane = true;
	ProjectileMovement->ConstrainNormalToPlane(FVector(0.0f, 0.0f, 1.0f));
	ProjectileMovement->Velocity = FVector(1.0f, 1.0f, 0.0f);
	ProjectileMovement->SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting::Custom);
	bCanCollide = true;
}

void AGoldBall::Disparar()
{
	MallaBall->AddImpulse(FVector(200.0f, 900.0f, 0.0f), FName(), true);
}

void AGoldBall::DestroyBall()
{
	Destroy();
}

// Called when the game starts or when spawned
void AGoldBall::BeginPlay()
{
	Super::BeginPlay();
	CollisionBall->OnComponentBeginOverlap.AddDynamic(this, &AGoldBall::OnOverlapBegin);
}

void AGoldBall::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FVector NewVelocity = CalculateReflectionVelocity(ProjectileMovement->Velocity, SweepResult.ImpactNormal);
	ProjectileMovement->Velocity = NewVelocity;
	FTimerHandle UnusedHandle;
}

FVector AGoldBall::CalculateReflectionVelocity(const FVector& CurrentVelocity, const FVector& SurfaceNormal)
{
	return CurrentVelocity - 2 * FVector::DotProduct(CurrentVelocity, SurfaceNormal) * SurfaceNormal;
}

void AGoldBall::SetVelocity(const FVector& NewVelocity)
{
	UPrimitiveComponent* BallPrimitive = Cast<UPrimitiveComponent>(RootComponent);
	if (BallPrimitive)
	{
		BallPrimitive->SetPhysicsLinearVelocity(NewVelocity, true);
	}
}

void AGoldBall::EnableCollision()
{
	bCanCollide = true;
}

// Called every frame
void AGoldBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
