// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAyuda.generated.h"

UCLASS()
class GALAGA_USFX_L001_API ANaveAyuda : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveAyuda;
	float velocidad;
	bool movimiento = true;
private:


public:
	// Sets default values for this actor's properties
	ANaveAyuda();
	virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};