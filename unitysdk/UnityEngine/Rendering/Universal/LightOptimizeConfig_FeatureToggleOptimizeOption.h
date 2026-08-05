#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_FeatureToggleOptimizeOption_TypeDefinitionIndex = 27163;

	enum class LightOptimizeConfig_FeatureToggleOptimizeOption : ::System::Int32
	{
		SpecularOff = 2,
		DiffuseOff = 4,
		ShadowOff = 1,
		None = 0,
	};
}
