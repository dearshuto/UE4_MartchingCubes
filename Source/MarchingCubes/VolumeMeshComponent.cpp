// Fill out your copyright notice in the Description page of Project Settings.


#include "VolumeMeshComponent.h"




UVolumeMeshComponent::UVolumeMeshComponent(const FObjectInitializer& objectInitializer)
    : Super(objectInitializer)
    {
        PrimaryComponentTick.bCanEverTick = true;
    }