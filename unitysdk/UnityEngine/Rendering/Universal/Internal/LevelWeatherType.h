#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LevelWeatherType_TypeDefinitionIndex = 30420;

	enum class LevelWeatherType : ::System::Int32
	{
		CommonBattle = 0,
		MainCity_DayAndNight = 1,
		Zero = 2,
		WeatherSystemV2 = 3,
	};
}
