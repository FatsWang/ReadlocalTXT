// Copyright 2022 "ChangShengJiangJuWangPangPang".All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FReadlocalTXTModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
