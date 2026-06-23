#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherMaterialTransitionType_TypeDefinitionIndex = 26629;

	enum class WeatherMaterialTransitionType : ::System::Int32
	{
		None = 2,
		NoonFoggy = 0,
		SpecialRed = 1,
	};
}
