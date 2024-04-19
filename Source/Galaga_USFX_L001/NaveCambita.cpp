// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCambita.h"
#include "Components/InputComponent.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/CharacterMovementComponent.h"

const FName ANaveCambita::MoveForwardBinding("MoveForward");
const FName ANaveCambita::MoveRightBinding("MoveRight");
const FName ANaveCambita::FireForwardBinding("FireForward");
const FName ANaveCambita::FireRightBinding("FireRight");

// Sets default values
ANaveCambita::ANaveCambita()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	MallaNaveCambita = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MALLANaveCambita"));
	MallaNaveCambita->SetStaticMesh(ShipMesh.Object);

}
// Called when the game starts or when spawned
void ANaveCambita::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveCambita::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ANaveCambita::movMIzq(float Valor)
{
	const FVector Velocidad = FVector(-650.0f, 0.0f, 0.0f);

	// Aplica el desplazamiento de la nave hacia la izquierda
	AddActorWorldOffset(Velocidad * Valor * GetWorld()->GetDeltaSeconds(), true);

	// Si hay un valor de entrada, ajusta la rotación de la nave
	if (Valor)
	{
		FRotator NuevaRotacion = FRotator(0.0f, -90.0f, 0.0f); // Rotación hacia la izquierda
		SetActorRotation(NuevaRotacion);
	}
}
void ANaveCambita::movMDer(float Valor)
{
	const FVector Velocidad = FVector(650.0f, 0.0f, 0.0f);
	AddActorWorldOffset(Velocidad * Valor * GetWorld()->GetDeltaSeconds(), true);

	if (Valor)
	{
		FRotator NuevaRotacion = FRotator(0.0f, -90.0f, 0.0f);
		SetActorRotation(NuevaRotacion);
	}
}

void ANaveCambita::movMArriba(float Valor)
{
	const FVector Velocidad = FVector(-650.0f, 0.0f, 0.0f);
	AddActorWorldOffset(Velocidad * Valor * GetWorld()->GetDeltaSeconds(), true);

	if (Valor)
	{
		FRotator NuevaRotacion = FRotator(0.0f, 90.0f, 0.0f);
		SetActorRotation(NuevaRotacion);
	}
}

void ANaveCambita::movMAbajo(float Valor)
{
	const FVector Velocidad = FVector(-650.0f, 0.0f, 0.0f);
	AddActorWorldOffset(Velocidad * Valor * GetWorld()->GetDeltaSeconds(), true);

	if (Valor)
	{
		FRotator NuevaRotacion = FRotator(0.0f, -180.0f, 0.0f);
		SetActorRotation(NuevaRotacion);
	}
}
