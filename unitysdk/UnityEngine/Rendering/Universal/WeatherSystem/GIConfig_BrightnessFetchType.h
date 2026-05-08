#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int GIConfig_BrightnessFetchType_TypeDefinitionIndex = 30293;

	enum class GIConfig_BrightnessFetchType : ::System::Int32
	{
		HSV = 0,
		Luminance = 1,
	};
}
