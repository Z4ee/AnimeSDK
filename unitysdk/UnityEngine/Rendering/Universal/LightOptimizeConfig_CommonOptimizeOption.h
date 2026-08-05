#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_CommonOptimizeOption_TypeDefinitionIndex = 27162;

	enum class LightOptimizeConfig_CommonOptimizeOption : ::System::Int32
	{
		CullableBasedDistance = 2,
		Uncullable = 0,
		CullableBasedOnScreenCoverage = 1,
	};
}
