// Fill out your copyright notice in the Description page of Project Settings.


#include "Actores/Boton.h"
#include "Engine/Engine.h"

// Sets default values
ABoton::ABoton()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("ButtonMesh")
	);

	RootComponent = ButtonMesh;


	bActivated = false;

}

void ABoton::ActivationABoton()
{
	bActivated = true;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			FColor::Green,
			TEXT("Boton Activado")
		);
	}
}

// Called when the game starts or when spawned
void ABoton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

