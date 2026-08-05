#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LevelWeatherType_TypeDefinitionIndex = 27959;

	enum class LevelWeatherType : ::System::Int32
	{
		CommonBattle = 0,
		WeatherSystemV2 = 3,
		Zero = 2,
		MainCity_DayAndNight = 1,
	};
}
