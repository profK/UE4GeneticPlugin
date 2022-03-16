// Copyright Epic Games, Inc. All Rights Reserved.

#include "FFMLPBPLibrary.h"
#include "FFMLP.h"

UFFMLPBPLibrary::UFFMLPBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FNeuralNetworkPopulation UFFMLPBPLibrary::MakeNets(FGenomePool genomes)
{
	return FNeuralNetworkPopulation();
}

