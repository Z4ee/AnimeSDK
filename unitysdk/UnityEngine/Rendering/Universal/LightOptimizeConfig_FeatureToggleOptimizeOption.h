#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_FeatureToggleOptimizeOption_TypeDefinitionIndex = 30020;

	enum class LightOptimizeConfig_FeatureToggleOptimizeOption : ::System::Int32
	{
		None = 0,
		ShadowOff = 1,
		SpecularOff = 2,
		DiffuseOff = 4,
	};
}
