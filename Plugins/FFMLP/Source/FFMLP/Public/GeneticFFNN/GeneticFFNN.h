#pragma once
#include "GenomePool.h"
#include<memory>



using namespace gp;

namespace nn
{

    struct NeuralNetPool
    {
        int netCount;
        void *nets;
        int _inputLayerWidth;
        int _hiddenLayerWidth;
        int _hiddenLayerDepth;	
        int _outputLayerWidth;
    };

    extern int GetGenomeSize(int inputLayerWidth, int hiddenLayerWidth,
        int hiddenLayerDepth, int outputLayerWidth);
    
    extern NeuralNetPool MakeNetsFromGenomes(GenomePool pool,
        int inputLayerWidth, int hiddenLayerWidth,
        int hiddenLayerDepth, int outputLayerWidth);

    extern unique_ptr<float[]> Process(
        NeuralNetPool netPool, int netId, float* inputValues, float* outputMemory=NULL);
    
}