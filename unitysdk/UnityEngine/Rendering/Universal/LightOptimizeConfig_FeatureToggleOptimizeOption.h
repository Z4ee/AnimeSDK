#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_FeatureToggleOptimizeOption_TypeDefinitionIndex = 26976;

	enum class LightOptimizeConfig_FeatureToggleOptimizeOption : ::System::Int32
	{
		DiffuseOff = 4,
		SpecularOff = 2,
		None = 0,
		ShadowOff = 1,
	};
}
