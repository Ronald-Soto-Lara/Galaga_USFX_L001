// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L001Pawn.h"
#include "Galaga_USFX_L001Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "EscudoActor.h"
#include "GameFramework/PlayerInput.h"

const FName AGalaga_USFX_L001Pawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFX_L001Pawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFX_L001Pawn::FireForwardBinding("FireForward");
const FName AGalaga_USFX_L001Pawn::FireRightBinding("FireRight");

AGalaga_USFX_L001Pawn::AGalaga_USFX_L001Pawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;	
	bCanFire = true;
}
void AGalaga_USFX_L001Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);


	FInputActionKeyMapping CrearBarreraKey("CrearBarrera", EKeys::K, 0, 0, 0, 0);

	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);

	UPlayerInput::AddEngineDefinedActionMapping(CrearBarreraKey);
	PlayerInputComponent->BindAction("CrearBarrera", IE_Pressed, this, &AGalaga_USFX_L001Pawn::CrearBarrera);
}
void AGalaga_USFX_L001Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
}

void AGalaga_USFX_L001Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGalaga_USFX_L001Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFX_L001Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AGalaga_USFX_L001Pawn::ShotTimerExpired()
{
	bCanFire = true;
}
void AGalaga_USFX_L001Pawn::CrearBarrera()
{
	if (!bCrearBarr)
	{
		return;
	}
	FVector Location = GetActorLocation() + FVector(100.0f, 0.0f, 0.0f);
	FRotator Rotation = GetActorRotation();
	AEscudoActor* CrearBarreraActor = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	AEscudoActor* CrearBarreraActor1 = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	AEscudoActor* CrearBarreraActor2 = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	AEscudoActor* CrearBarreraActor3 = GetWorld()->SpawnActor<AEscudoActor>(AEscudoActor::StaticClass(), Location, Rotation);
	if (CrearBarreraActor != nullptr)
	{
		CrearBarreraActor->SetActorLocation(Location);
		CrearBarreraActor->SetActorRotation(Rotation);
		CrearBarreraActor1->SetActorLocation(Location + FVector(-100.0f, 100.0f, 0.0f));
		CrearBarreraActor1->SetActorRotation(Rotation + FRotator(0.0f, 90.0f, 0.0f));
		CrearBarreraActor2->SetActorLocation(Location + FVector(-100.0f, -100.0f, 0.0f));
		CrearBarreraActor2->SetActorRotation(Rotation + FRotator(0.0f, -90.0f, 0.0f));
		CrearBarreraActor3->SetActorLocation(Location + FVector(-200.0f, 0.0f, 0.0f));
		CrearBarreraActor3->SetActorRotation(Rotation);

		// Crear un delegado de temporizador
		FTimerDelegate TimerDel;
		TimerDel.BindLambda([CrearBarreraActor, CrearBarreraActor1, CrearBarreraActor2, CrearBarreraActor3]()
			{
				if (CrearBarreraActor && CrearBarreraActor->IsValidLowLevel())
				{
					CrearBarreraActor->Destroy();
				}
				if (CrearBarreraActor1 && CrearBarreraActor1->IsValidLowLevel())
				{
					CrearBarreraActor1->Destroy();
				}
				if (CrearBarreraActor2 && CrearBarreraActor2->IsValidLowLevel())
				{
					CrearBarreraActor2->Destroy();
				}
				if (CrearBarreraActor3 && CrearBarreraActor3->IsValidLowLevel())
				{
					CrearBarreraActor3->Destroy();
				}
			});

		// Destruccion del actor despues de 5 segundos de aparecer
		GetWorld()->GetTimerManager().SetTimer(DestruirBarrera, TimerDel, 5.0f, false);
	}
	bCrearBarr = false;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_CrearBarrera, this, &AGalaga_USFX_L001Pawn::ResetCrearBarrera, 10.0f, false);
}
void AGalaga_USFX_L001Pawn::ResetCrearBarrera()
{
	bCrearBarr = true;
}