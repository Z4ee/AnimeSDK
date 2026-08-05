#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_FloodFillPass_TypeDefinitionIndex = 26776;

	enum class PostProcessPass_FloodFillPass : ::System::Int32
	{
		StatRegionData_Group = 5,
		IterPass1_GetRegion = 4,
		GenerateSprites = 6,
		IterPass0 = 2,
		ColorConvert = 0,
		IterPass1 = 3,
		Init = 1,
	};
}
