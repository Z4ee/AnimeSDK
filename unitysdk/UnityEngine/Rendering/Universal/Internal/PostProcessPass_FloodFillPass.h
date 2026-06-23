#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_FloodFillPass_TypeDefinitionIndex = 26708;

	enum class PostProcessPass_FloodFillPass : ::System::Int32
	{
		ColorConvert = 0,
		GenerateSprites = 6,
		StatRegionData_Group = 5,
		IterPass0 = 2,
		IterPass1_GetRegion = 4,
		IterPass1 = 3,
		Init = 1,
	};
}
