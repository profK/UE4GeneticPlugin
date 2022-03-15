// Copyright Epic Games, Inc. All Rights Reserved.

#include "GenomePoolBPLibrary.h"
#include "GenomePool.h"

UGenomePoolBPLibrary::UGenomePoolBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FGenomePool UGenomePoolBPLibrary::InitializeGenePool(FGenomePool pool,
	int genomeSize, int genomeCount)
{
	pool.genePool = gp::ConfigGenomePool(pool.genePool,genomeSize,genomeCount);
	return pool;
}

FGenomePool UGenomePoolBPLibrary::ArithmaticCrossover(FGenomePool pool,
	TArray<float> scores)
{
	int genomeCount = pool.genePool.genomeCount;
	double* dscores = new double[genomeCount];
	for(int i=0;i<genomeCount;i++)
	{
		dscores[i] = (double)(scores[i]);
	}
	gp::ArithmaticCrossover(pool.genePool,dscores,genomeCount);
	return pool;
}

FGenomePool UGenomePoolBPLibrary::Mutate(FGenomePool pool,float mutationRate)
{
	gp::Mutate(pool.genePool,mutationRate);
	return pool;
}

void UGenomePoolBPLibrary::ExtractParameters(FGenomePool pool,int& genomeSize, int& genomeCount)
{
	genomeSize = pool.genePool.genomeSize;
	genomeCount = pool.genePool.genomeCount;
}

TArray<float> UGenomePoolBPLibrary::ExtractGenome(FGenomePool pool,int genomeIndex)
{
	TArray<float> retVal;
	float* genome = new float[pool.genePool.genomeSize];
	const float* dataPtr=gp::GetGenome(pool.genePool,genomeIndex,genome);
	retVal.Append(dataPtr,pool.genePool.genomeSize);
	delete genome;
	return retVal;
}
