#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightShadowResolution_TypeDefinitionIndex = 4694;

	enum class LightShadowResolution : ::System::Int32
	{
		FromQualitySettings = -1,
		Low = 0,
		Medium = 1,
		High = 2,
		VeryHigh = 3,
	};
}
