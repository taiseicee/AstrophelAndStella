// Fill out your copyright notice in the Description page of Project Settings.


#include "SpacecraftPlayer.h"

// Sets default values
ASpacecraftPlayer::ASpacecraftPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpacecraftPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpacecraftPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpacecraftPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

