#pragma once
#include <list>

using namespace std;

/// This file defiens a C ABI for the GenomePoolClass

namespace gp {

	struct GenomePool {
		int genomeSize;
		int genomeCount;
		void* data;   // a pointer to a NumCpp NdArray
	};

	extern  GenomePool NewGenomePool(int genomeSize, int genomeCount);
	extern void ArithmaticCrossover(GenomePool pool, double* scores, int scoreCount);
	extern void Mutate(GenomePool pool, float mutationRate);
	extern GenomePool ConfigGenomePool(GenomePool pool,int genomeSize, int genomeCount);
}
