#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EWaterGenQuality_TypeDefinitionIndex = 27415;

	enum class EWaterGenQuality : ::System::Int32
	{
		Low = 1,
		High = 3,
		Off = 0,
		Medium = 2,
	};
}
