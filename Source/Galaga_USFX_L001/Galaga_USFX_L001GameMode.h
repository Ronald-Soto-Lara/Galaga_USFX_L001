// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L001GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveAyuda;
class ANaveCambita;

UCLASS(MinimalAPI)
class AGalaga_USFX_L001GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L001GameMode();
	virtual void BeginPlay() override;

public:
	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveAyuda* TANavesAyuda;
	ANaveCambita* TANavesCambita;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;

private:
	int TiempoTranscurrido;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};