// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	FVector StartingLocation;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FVector	PlatformVelocity = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FRotator RotationVelocity = FRotator(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	float DistanceThreshold = 1000;

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
};
