// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateValue();
}

#if WITH_EDITOR
void AMyActor::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
{
	CalculateValue();
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void AMyActor::CalculateValue() {
	damagePerSecond = totalDamage / damageTime;
}

void AMyActor::CalledFromCpp_Implementation()
{
}
