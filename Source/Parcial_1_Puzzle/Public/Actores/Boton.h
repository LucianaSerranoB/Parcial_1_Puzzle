// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "Boton.generated.h"

class UStaticMeshComponent;

UCLASS()
class PARCIAL_1_PUZZLE_API ABoton : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoton();
	

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent>ButtonMesh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puzzle")
	bool bActivated;


	virtual void Interact_Implementation(AActor* Interactor) override;


   UFUNCTION(BlueprintCallable)
   void ActivationABoton();


   // Called every frame
   virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
