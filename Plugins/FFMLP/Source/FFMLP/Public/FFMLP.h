// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

struct NeuralNet
{
	void* _inputLayerPtr;
	void* _hiddenLayersPtr;
	void* _outputLayerPtr;
	void* _hiddenLayerBiasesPtr;
	void* _outputLayerBiasesPtr;
	int _inputLayerWidth;
	int _hiddenLayerWidth;
	int _hiddenLayerDepth;	
	int _outputLayerWidth;
};

class FFFMLPModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
