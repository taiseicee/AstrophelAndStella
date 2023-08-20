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
