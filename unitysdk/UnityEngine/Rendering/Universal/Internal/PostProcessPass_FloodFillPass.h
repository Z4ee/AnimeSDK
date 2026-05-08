#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_FloodFillPass_TypeDefinitionIndex = 30530;

	enum class PostProcessPass_FloodFillPass : ::System::Int32
	{
		ColorConvert = 0,
		Init = 1,
		IterPass0 = 2,
		IterPass1 = 3,
		IterPass1_GetRegion = 4,
		StatRegionData_Group = 5,
		GenerateSprites = 6,
	};
}
