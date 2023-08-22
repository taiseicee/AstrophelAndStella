// Fill out your copyright notice in the Description page of Project Settings.


#include "SpacecraftPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ProceduralAnimator.h"

ASpacecraftPlayer::ASpacecraftPlayer() {
	PrimaryActorTick.bCanEverTick = true;
	ComponentMeshBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	ComponentCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	RootComponent = ComponentMeshBase;
	ComponentCamera->SetupAttachment(ComponentMeshBase);

	ThrustAnimator = CreateDefaultSubobject<UProceduralAnimator>(TEXT("Thrust Animator"));
	RotationAnimator = CreateDefaultSubobject<UProceduralAnimator>(TEXT("Rotation Animator"));
}

void ASpacecraftPlayer::BeginPlay() {
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController())) {
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer())) {
			Subsystem->AddMappingContext(MappingContextSpacecraft, 0);
		}
	}
}

void ASpacecraftPlayer::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void ASpacecraftPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		EnhancedInputComponent->BindAction(ActionThrust, ETriggerEvent::Triggered, this, &ASpacecraftPlayer::HandleInputThrust);
		EnhancedInputComponent->BindAction(ActionThrust, ETriggerEvent::None, this, &ASpacecraftPlayer::HandleInputThrust);
        EnhancedInputComponent->BindAction(ActionRotate, ETriggerEvent::Triggered, this, &ASpacecraftPlayer::HandleInputRotate);
		EnhancedInputComponent->BindAction(ActionRotate, ETriggerEvent::None, this, &ASpacecraftPlayer::HandleInputRotate);
        EnhancedInputComponent->BindAction(ActionToggleCounterThrust, ETriggerEvent::Started, this, &ASpacecraftPlayer::ToggleCounterThrust);
	}
}

void ASpacecraftPlayer::HandleInputThrust(const FInputActionValue& Value) {
	float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
	FVector Input = Value.Get<FVector>().GetClampedToSize(-1.f, 1.f);
	Input = GetActorForwardVector() * Input.X * ThrustRatio.X +
			GetActorRightVector() * Input.Y * ThrustRatio.Y +
			GetActorUpVector() * Input.Z  * ThrustRatio.Z;

	if (CounterThrustOn) {
		ThrustVelocity = ThrustAnimator->GetVelocity(DeltaTime, Input) * ThrustMaxVelocity;
	} else {
		FVector Velocity = (ThrustAnimator->GetVelocitySimple() + ThrustAcceleration * DeltaTime * Input).GetClampedToSize(-1.f, 1.f);
		ThrustAnimator->SetVelocity(DeltaTime, Velocity);
		ThrustVelocity = Velocity * ThrustMaxVelocity;
	}

	AddActorWorldOffset(DeltaTime * ThrustVelocity, true);
}

void ASpacecraftPlayer::HandleInputRotate(const FInputActionValue& Value) {
	const float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
	FVector Input = Value.Get<FVector>() * RotationRatio;

	if (CounterThrustOn) {
		FVector RotVelAnimated = RotationAnimator->GetVelocity(DeltaTime, Input) * RotationMaxVelocity;
		RotationVelocity.Roll = RotVelAnimated.X;
		RotationVelocity.Pitch = RotVelAnimated.Y;
		RotationVelocity.Yaw = RotVelAnimated.Z;
	} else {
		FVector Velocity = (RotationAnimator->GetVelocitySimple() + RotationAcceleration * DeltaTime * Input).GetClampedToSize(-1.f, 1.f);
		RotationAnimator->SetVelocity(DeltaTime, Velocity);
		RotationVelocity.Roll = Velocity.X * RotationMaxVelocity;
		RotationVelocity.Pitch = Velocity.Y * RotationMaxVelocity;
		RotationVelocity.Yaw = Velocity.Z * RotationMaxVelocity;
	}

	AddActorLocalRotation(RotationVelocity * DeltaTime, true);
}

void ASpacecraftPlayer::ToggleCounterThrust(const FInputActionValue& Value) { CounterThrustOn = !CounterThrustOn; }
