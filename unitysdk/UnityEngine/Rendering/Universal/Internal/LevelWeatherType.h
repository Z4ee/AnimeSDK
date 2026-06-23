#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LevelWeatherType_TypeDefinitionIndex = 27219;

	enum class LevelWeatherType : ::System::Int32
	{
		MainCity_DayAndNight = 1,
		WeatherSystemV2 = 3,
		CommonBattle = 0,
		Zero = 2,
	};
}
