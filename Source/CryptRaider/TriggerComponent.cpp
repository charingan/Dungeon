// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"



UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


}


// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

    UE_LOG(LogTemp, Display, TEXT("Im working!"));
	
}


// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    UE_LOG(LogTemp, Display, TEXT("Hello"));

    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    if(Actors.Num() > 0)
    {
        UE_LOG(LogTemp, Display, TEXT("First element of the array : %s") , *Actors[0]->GetActorNameOrLabel());
    }
}


bool UTriggerComponent::OpenSecretDoor(bool& ShouldOpen)
{
    ShouldOpen = true;
    return ShouldOpen;
}