#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalAdditionalLightData_LightUsage_TypeDefinitionIndex = 26425;

	enum class UniversalAdditionalLightData_LightUsage : ::System::Int32
	{
		Is2DLight = 99,
		IgnoreFxAdditionalLightIntensity = 1,
		IndicatedLight = 2,
		None = 0,
	};
}
