// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProceduralAnimator.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTROPHELANDSTELLA_API UProceduralAnimator : public UActorComponent {
	GENERATED_BODY()

public:	
	UProceduralAnimator();

protected:
	virtual void BeginPlay() override;

private:
	/*
	* F: Natural Frequency. Describes the speed of which the system will respond to changes and the frequency the system will tend to vibrate at
	* Z: Damping Coeffcient. At Z=0, no damping. At 0<Z<1 underdamping. At 1<=Z the speed of which the system will settle to the target
	* R: Initial Response. At R=0, it will be slow to accelerate from rest. 0<R<1, the system will accelerate faster from rest. 1<R the target will overshoot 
	*/
	UPROPERTY(EditAnywhere, Category="Constants")
	float F = 0.f;
	UPROPERTY(EditAnywhere, Category="Constants")
	float Z = 0.f;
	UPROPERTY(EditAnywhere, Category="Constants")
	float R = 0.f;

	float K1, K2, K3;
	FVector InputPosition = FVector::ZeroVector;
	FVector Position = FVector::ZeroVector;
	FVector Velocity = FVector::ZeroVector;

public:
	FVector GetVelocity(const float& DeltaTime, const FVector& InputVelocity);

};
