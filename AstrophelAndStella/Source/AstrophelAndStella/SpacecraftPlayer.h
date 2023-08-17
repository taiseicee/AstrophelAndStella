// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "InputActionValue.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpacecraftPlayer.generated.h"

UCLASS()
class ASTROPHELANDSTELLA_API ASpacecraftPlayer : public APawn {
	GENERATED_BODY()

public:
	ASpacecraftPlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	UStaticMeshComponent* ComponentMeshBase;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	class USpringArmComponent* ComponentCameraSpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	class UCameraComponent* ComponentCamera;

	// Inputs
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta=(AllowPrivateAccess="true"))
	class UInputMappingContext* MappingContextSpacecraft;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta=(AllowPrivateAccess="true"))
	class UInputAction* ActionThrust;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta=(AllowPrivateAccess="true"))
	class UInputAction* ActionRotate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta=(AllowPrivateAccess="true"))
	class UInputAction* ActionToggleCounterThrust;

	void HandleInputThrust(const FInputActionValue& Value);
    void HandleInputRotate(const FInputActionValue& Value);
    void ToggleCounterThrust(const FInputActionValue& Value);

	// Movement
	UPROPERTY(VisibleAnywhere, Category="Movement")
	bool CounterThrustOn = true;

	UPROPERTY(VisibleAnywhere, Category="Movement|Thrust")
   	FVector ThrustGlobal = FVector::ZeroVector;
	UPROPERTY(VisibleAnywhere, Category="Movement|Thrust")
   	FVector ThrustInput = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, Category="Movement|Thrust")
   	FVector ThrustAcceleration = FVector(25.f, 18.f, 18.f);
	UPROPERTY(EditAnywhere, Category="Movement|Thrust")
   	FVector ThrustMaxVelocity = FVector(220.f, 155.f, 155.f);

	UPROPERTY(VisibleAnywhere, Category="Movement|Rotation")
   	FRotator Rotation = FRotator::ZeroRotator;
	UPROPERTY(VisibleAnywhere, Category="Movement|Rotation")
   	FRotator RotationInput = FRotator::ZeroRotator;
	UPROPERTY(EditAnywhere, Category="Movement|Rotation")
   	FRotator RotationAcceleration = FRotator(18.f, 18.f, 18.f);
	UPROPERTY(EditAnywhere, Category="Movement|Rotation")
   	FRotator RotationMaxVelocity = FRotator(40.f, 40.f, 40.f);

	void MovementCTOn(const float& DeltaTime);
   	void MovementCTOff(const float& DeltaTime);
};
