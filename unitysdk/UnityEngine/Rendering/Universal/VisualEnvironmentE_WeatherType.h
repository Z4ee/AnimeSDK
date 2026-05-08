#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherType_TypeDefinitionIndex = 29911;

	enum class VisualEnvironmentE_WeatherType : ::System::Int32
	{
		Day_SunShine = 0,
		Day_Fog = 1,
		ThickCloudy = 2,
		Day_Rain = 3,
		Evening_SunShine = 4,
		Evening_Fog = 5,
		Evening_Rain = 7,
		Night_SunShine = 8,
		Night_Fog = 9,
		Night_Rain = 11,
		Thunder = 12,
		ThickFog = 13,
		ZeroStage1 = 0,
		ZeroStage2 = 1,
		ZeroStage3 = 2,
		ZeroStage4 = 3,
		Tod_Morning = 0,
		Tod_Noon = 1,
		Tod_Dusk = 2,
		Tod_Evening = 3,
		Tod_MidNight = 4,
		Tod_Dawn = 5,
		Tod_Count = 6,
	};
}
