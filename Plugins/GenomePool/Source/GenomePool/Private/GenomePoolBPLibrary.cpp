// Copyright Epic Games, Inc. All Rights Reserved.

#include "GenomePoolBPLibrary.h"
#include "GenomePool.h"

UGenomePoolBPLibrary::UGenomePoolBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FGenomePool UGenomePoolBPLibrary::InitializeGenePool(FGenomePool pool, int genomeSize, int genomeCount)
{
	pool.genePool = gp::ConfigGenomePool(pool.genePool,genomeSize,genomeCount);
	return pool;
}

