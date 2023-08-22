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
   	FVector ThrustVelocity = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, Category="Movement|Thrust")
   	FVector ThrustRatio = FVector(1.f, 0.7f, 0.7f);
	UPROPERTY(EditAnywhere, Category="Movement|Thrust")
   	float ThrustMaxVelocity = 22000.f;
	UPROPERTY(EditAnywhere, Category="Movement|Thrust")
   	float ThrustAcceleration = 1.f;
	UPROPERTY(EditAnywhere, Category="Movement|Thrust")
	class UProceduralAnimator* ThrustAnimator;

	UPROPERTY(VisibleAnywhere, Category="Movement|Rotation")
   	FRotator RotationVelocity = FRotator::ZeroRotator;
	UPROPERTY(EditAnywhere, Category="Movement|Rotation")
   	FVector RotationRatio = FVector(1.f, 1.f, 1.f);
	UPROPERTY(EditAnywhere, Category="Movement|Rotation")
   	float RotationMaxVelocity = 40.f;
	UPROPERTY(EditAnywhere, Category="Movement|Rotation")
   	float RotationAcceleration = 1.f;
	UPROPERTY(EditAnywhere, Category="Movement|Rotation")
	class UProceduralAnimator* RotationAnimator;
};
