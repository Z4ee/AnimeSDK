#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalAdditionalLightData_LightUsage_TypeDefinitionIndex = 27573;

	enum class UniversalAdditionalLightData_LightUsage : ::System::Int32
	{
		IndicatedLight = 2,
		None = 0,
		IgnoreFxAdditionalLightIntensity = 1,
		Is2DLight = 99,
	};
}
