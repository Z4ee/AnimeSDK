#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodQuality_TypeDefinitionIndex = 27066;

	enum class LightLodQuality : ::System::Int32
	{
		Low = 3,
		Middle = 2,
		VeryHigh = 0,
		Disable = -1,
		High = 1,
	};
}
