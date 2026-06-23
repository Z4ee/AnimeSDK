#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherType_TypeDefinitionIndex = 26502;

	enum class VisualEnvironmentE_WeatherType : ::System::Int32
	{
		Day_SunShine = 0,
		ZeroStage1 = 0,
		ZeroStage3 = 2,
		Tod_Dusk = 2,
		Tod_MidNight = 4,
		Night_Fog = 9,
		Day_Fog = 1,
		Night_SunShine = 8,
		Tod_Dawn = 5,
		Tod_Evening = 3,
		Thunder = 12,
		Evening_Rain = 7,
		Night_Rain = 11,
		Tod_Count = 6,
		Evening_Fog = 5,
		ZeroStage2 = 1,
		Tod_Noon = 1,
		Evening_SunShine = 4,
		ZeroStage4 = 3,
		Tod_Morning = 0,
		ThickCloudy = 2,
		Day_Rain = 3,
		ThickFog = 13,
	};
}
