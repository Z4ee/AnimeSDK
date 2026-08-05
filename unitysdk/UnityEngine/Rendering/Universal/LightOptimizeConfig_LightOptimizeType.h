#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_LightOptimizeType_TypeDefinitionIndex = 27164;

	enum class LightOptimizeConfig_LightOptimizeType : ::System::Int32
	{
		FarLight = 1,
		NearLight = 0,
	};
}
