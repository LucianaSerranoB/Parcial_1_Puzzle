// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UPuzzleComponent::UPuzzleComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPuzzleComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			FColor::Yellow,
			TEXT("Puzzle Component Iniciado")
		);
	}
}

void UPuzzleComponent::Interact()

	{
	CheckInteraction();
	}

void UPuzzleComponent::CheckInteraction()
{
	AActor* Owner = GetOwner();

	if (!Owner)
	{
		return;
	}
	UCameraComponent* Camera = Owner->FindComponentByClass<UCameraComponent>();

	if (!Camera)
	{
		return;
	}

	FVector Start = Camera->GetComponentLocation();

	FVector End = Start + (Camera->GetForwardVector() * 1000.0f);

	FHitResult Hit;

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		ECC_Visibility
	);

	if (bHit)
	{
		if (Hit.GetActor())
		{
			FString ActorName = Hit.GetActor()->GetName();

			GEngine->AddOnScreenDebugMessage(
				-1,
				3.0f,
				FColor::Green,
				ActorName
			);
		}
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				3.0f,
				FColor::Red,
				TEXT("Nada detectado")
			);
		}
	}
}


// Called every frame
void UPuzzleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

