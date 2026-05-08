#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TimeOfDay_TypeDefinitionIndex = 29909;

	enum class VisualEnvironmentE_TimeOfDay : ::System::Int32
	{
		Morning = 0,
		Noon = 1,
		SunSet = 2,
		InNight = 3,
		Night = 4,
		OutNight = 5,
		Count = 6,
	};
}
