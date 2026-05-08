#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_CommonOptimizeOption_TypeDefinitionIndex = 30021;

	enum class LightOptimizeConfig_CommonOptimizeOption : ::System::Int32
	{
		Uncullable = 0,
		CullableBasedOnScreenCoverage = 1,
		CullableBasedDistance = 2,
	};
}
