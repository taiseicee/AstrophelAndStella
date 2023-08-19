// Fill out your copyright notice in the Description page of Project Settings.


#include "SpacecraftPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"

ASpacecraftPlayer::ASpacecraftPlayer() {
	PrimaryActorTick.bCanEverTick = true;
	ComponentMeshBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	ComponentCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Spring Arm"));
	ComponentCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	RootComponent = ComponentMeshBase;
	ComponentCameraSpringArm->SetupAttachment(ComponentMeshBase);
	ComponentCamera->AttachToComponent(ComponentCameraSpringArm, FAttachmentTransformRules::KeepRelativeTransform);

	ComponentCameraSpringArm->bUsePawnControlRotation = true;
	ComponentCameraSpringArm->bEnableCameraLag = true;
	ComponentCameraSpringArm->TargetArmLength = 5.f;
}

void ASpacecraftPlayer::BeginPlay() {
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController())) {
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer())) {
			Subsystem->AddMappingContext(MappingContextSpacecraft, 0);
		}
	}

	K1 = z / (PI * f);
	K2 = 1 / ((2 * PI * f) * (2 * PI * f));
	K3 = r * z / (2 * PI * f);
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
	MovementCTOn(DeltaTime, Value.Get<FVector>());
}

void ASpacecraftPlayer::HandleInputRotate(const FInputActionValue& Value) {
	float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
	RotationInput.Roll = Value.Get<FVector>().X;
	RotationInput.Pitch = Value.Get<FVector>().Y;
	RotationInput.Yaw = Value.Get<FVector>().Z;
}

void ASpacecraftPlayer::ToggleCounterThrust(const FInputActionValue& Value) { CounterThrustOn = !CounterThrustOn; }

void ASpacecraftPlayer::MovementCTOn(const float& DeltaTime, const FVector& InputVelocity) {
	InputPosition = InputPosition + InputVelocity * DeltaTime;

	float K2_Stable = 1.1f * (DeltaTime * DeltaTime / 4 + DeltaTime * K1 / 2);
	K2_Stable = (K2 > K2_Stable) ? K2_Stable : K2;

	Position = Position + DeltaTime * Velocity;
	Velocity = Velocity + DeltaTime * (InputPosition + K3 * InputVelocity - Position - K1 * Velocity) / K2_Stable;

	AddActorLocalOffset(ThrustMaxVelocity * Velocity * DeltaTime, true);
	//AddActorWorldOffset(GlobalVector * DeltaTime, true);
}

void ASpacecraftPlayer::MovementCTOff(const float& DeltaTime) {

}

