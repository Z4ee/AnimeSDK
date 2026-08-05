#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherType_TypeDefinitionIndex = 27435;

	enum class VisualEnvironmentE_WeatherType : ::System::Int32
	{
		Tod_Noon = 1,
		ZeroStage2 = 1,
		Tod_Count = 6,
		Tod_MidNight = 4,
		Thunder = 12,
		Tod_Morning = 0,
		Tod_Dawn = 5,
		Evening_Rain = 7,
		Evening_SunShine = 4,
		ZeroStage3 = 2,
		ZeroStage4 = 3,
		Day_SunShine = 0,
		ThickFog = 13,
		Day_Rain = 3,
		Day_Fog = 1,
		Evening_Fog = 5,
		Night_Rain = 11,
		ZeroStage1 = 0,
		Night_Fog = 9,
		Tod_Evening = 3,
		Tod_Dusk = 2,
		ThickCloudy = 2,
		Night_SunShine = 8,
	};
}
