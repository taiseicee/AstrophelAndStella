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
	FVector InputVelocity = Value.Get<FVector>();

	if (!CounterThrustOn) {
		FVector VelocityPercent = ThrustVelocity / ThrustMaxVelocity;
		InputVelocity = InputVelocity * (InputVelocity - VelocityPercent).GetAbs() + VelocityPercent;
	}

	ThrustVelocity = GetActorQuat() * ThrustAnimator->GetVelocity(DeltaTime, InputVelocity) * ThrustMaxVelocity;
	AddActorWorldOffset(ThrustVelocity * DeltaTime, true);
}

void ASpacecraftPlayer::HandleInputRotate(const FInputActionValue& Value) {
	const float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
	FVector InputVelocity = Value.Get<FVector>();

	if (!CounterThrustOn) {
		FVector VelocityPercent = FVector::ZeroVector;
		VelocityPercent.X = RotationVelocity.Roll / RotationMaxVelocity.X;
		VelocityPercent.Y = RotationVelocity.Pitch / RotationMaxVelocity.Y;
		VelocityPercent.Z = RotationVelocity.Yaw / RotationMaxVelocity.Z;
		InputVelocity = InputVelocity * (InputVelocity - VelocityPercent).GetAbs() + VelocityPercent;
	}

	FVector RotVelAnimated = RotationAnimator->GetVelocity(DeltaTime, InputVelocity);
	RotationVelocity.Roll = RotVelAnimated.X * RotationMaxVelocity.X;
	RotationVelocity.Pitch = RotVelAnimated.Y * RotationMaxVelocity.Y;
	RotationVelocity.Yaw = RotVelAnimated.Z * RotationMaxVelocity.Z;
	AddActorLocalRotation(RotationVelocity * DeltaTime, true);
}

void ASpacecraftPlayer::ToggleCounterThrust(const FInputActionValue& Value) { CounterThrustOn = !CounterThrustOn; }
