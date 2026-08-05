#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodQuality_TypeDefinitionIndex = 26773;

	enum class LightLodQuality : ::System::Int32
	{
		VeryHigh = 0,
		Disable = -1,
		High = 1,
		Middle = 2,
		Low = 3,
	};
}
