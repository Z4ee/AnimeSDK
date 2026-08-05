#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TimeOfDay_TypeDefinitionIndex = 27441;

	enum class VisualEnvironmentE_TimeOfDay : ::System::Int32
	{
		Noon = 1,
		SunSet = 2,
		Count = 6,
		Night = 4,
		OutNight = 5,
		Morning = 0,
		InNight = 3,
	};
}
