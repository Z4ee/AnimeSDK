#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TimeOfDay_TypeDefinitionIndex = 26509;

	enum class VisualEnvironmentE_TimeOfDay : ::System::Int32
	{
		OutNight = 5,
		Noon = 1,
		Morning = 0,
		InNight = 3,
		SunSet = 2,
		Night = 4,
		Count = 6,
	};
}
