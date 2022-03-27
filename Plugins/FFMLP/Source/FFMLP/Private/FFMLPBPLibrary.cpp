// Copyright Epic Games, Inc. All Rights Reserved.

#include "FFMLPBPLibrary.h"
#include "FFMLP.h"
#include "GeneticFFNN/GeneticFFNN.h"
#include <memory>
#include <vector>

UFFMLPBPLibrary::UFFMLPBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FNeuralNetworkPopulation UFFMLPBPLibrary::MakeNets(FGenomePool genomes)
{
	return FNeuralNetworkPopulation();
}

TArray<float> UFFMLPBPLibrary::ProcessData(FNeuralNetworkPopulation pop,
		int netIndex, TArray<float> inputData)
{
	float* inArrayPtr = inputData.GetData();
	auto outValues = nn::Process(pop.netPool,netIndex,inArrayPtr);
	TArray<float> ret;
	ret.Append(outValues.get(),pop.netPool._outputLayerWidth);
	return ret;
}

