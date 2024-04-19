// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoEscena.h"

// Sets default values for this component's properties
UEscudoEscena::UEscudoEscena()
{


	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	// Crear el componente de malla est�tica
	//SceneComponentBarrera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SceneComponentBarrera"));

	//// Cargar la malla desde un archivo
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));


	//SceneComponentBarrera->SetStaticMesh(BarreraMesh.Object);



}

void UEscudoEscena::CrearBarrera()
{
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		FTransform ComponentTransform(this->GetComponentTransform());
		TheWorld->SpawnActor(BarreraToSpawn, &ComponentTransform);
	}

}


// Called when the game starts
void UEscudoEscena::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UEscudoEscena::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
