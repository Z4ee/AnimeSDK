#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardSourceMaterialSwitchStage_TypeDefinitionIndex = 27243;

	enum class GPUGrassBillboardSourceMaterialSwitchStage : ::System::Int32
	{
		LOD2 = 2,
		LOD1 = 1,
		LOD0 = 0,
		DistanceCulled = 3,
	};
}
