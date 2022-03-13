// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "GenomePoolLib/GenomePool.h"
#include "Modules/ModuleManager.h"

class FGenomePoolModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

