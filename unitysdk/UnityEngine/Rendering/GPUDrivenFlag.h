#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GPUDrivenFlag_TypeDefinitionIndex = 35973;

	enum class GPUDrivenFlag : ::System::Int32
	{
		DisableInstancedItemGraphicsJob = 1,
		EnableInstancedItemCullOneCS = 2,
		EnableGrassGPUDriven = 4,
		EnableRemoveEmptyIndirectDrawUseOC = 8,
		EnableIRIPPtrCheck = 16,
		RemoveIRIHizCloseFunc = 32,
		EnableIRIOpt = 64,
	};
}
