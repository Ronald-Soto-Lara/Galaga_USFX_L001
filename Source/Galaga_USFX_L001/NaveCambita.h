// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveCambita.generated.h"


UCLASS()
class GALAGA_USFX_L001_API ANaveCambita : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveCambita;
public:	
	// Sets default values for this actor's properties
	ANaveCambita();


protected:
	// Called when the game starts or when spawned
	virtual void Tick(float DeltaSeconds) override;
	virtual void movMIzq(float Value);
	virtual void movMDer(float Value);
	virtual void movMArriba(float Value);
	virtual void movMAbajo(float Value);
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;
	

public:	
	virtual void BeginPlay() override;

};

