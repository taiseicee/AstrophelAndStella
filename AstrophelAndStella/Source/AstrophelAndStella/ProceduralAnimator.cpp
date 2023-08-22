// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralAnimator.h"
#include "Math/UnrealMathUtility.h"

UProceduralAnimator::UProceduralAnimator() {}

void UProceduralAnimator::BeginPlay() {
	Super::BeginPlay();

	K1 = Z / (PI * F);
	K2 = 1 / ((2 * PI * F) * (2 * PI * F));
	K3 = R * Z / (2 * PI * F);
}

FVector UProceduralAnimator::GetVelocity(const float& DeltaTime, const FVector& InputVelocity) {
	InputPosition = InputPosition + InputVelocity * DeltaTime;

	float K2_Stable = 1.1f * (DeltaTime * DeltaTime / 4 + DeltaTime * K1 / 2);
	K2_Stable = (K2 > K2_Stable) ? K2_Stable : K2;

	Position = Position + DeltaTime * Velocity;
	Velocity = Velocity + DeltaTime * (InputPosition + K3 * InputVelocity - Position - K1 * Velocity) / K2_Stable;
	return Velocity;
}

FVector UProceduralAnimator::GetVelocitySimple() { return Velocity; }

void UProceduralAnimator::SetVelocity(const float& DeltaTime, const FVector& InputVelocity) {
	Position = Position + DeltaTime * InputVelocity;
	InputPosition = InputPosition + InputVelocity * DeltaTime;
	Velocity = InputVelocity;
}
