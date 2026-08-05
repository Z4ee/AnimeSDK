#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_OverrideWeatherPriority_TypeDefinitionIndex = 27436;

	enum class VisualEnvironmentE_OverrideWeatherPriority : ::System::Int32
	{
		Scene = 0,
		Timeline = 1000,
		GamePlay = 100,
	};
}
