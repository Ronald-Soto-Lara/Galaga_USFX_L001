// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAyuda.h"

// Sets default values
ANaveAyuda::ANaveAyuda()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaNaveAyuda = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MALLANaveAyuda"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'")); 
	MallaNaveAyuda->SetStaticMesh(ShipMesh.Object);
	movimiento = true;
	velocidad = -300;
	
}

// Called when the game starts or when spawned
void ANaveAyuda::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAyuda::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (movimiento)
    {
        SetActorLocation(GetActorLocation() + FVector(0.0f, 0.0f, 0.0f) * DeltaTime);
        if (GetActorLocation().X >= 0.0f)
        {
            movimiento = false;
        }
    }
    else
    {
        SetActorLocation(GetActorLocation() + FVector(velocidad, 0.0f, 0.0f) * DeltaTime);
        if (GetActorLocation().X <= -1200.0f)
        {
            movimiento = true;
        }
    }
}



