#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_LightOptimizeType_TypeDefinitionIndex = 30018;

	enum class LightOptimizeConfig_LightOptimizeType : ::System::Int32
	{
		NearLight = 0,
		FarLight = 1,
	};
}
