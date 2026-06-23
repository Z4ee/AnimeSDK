#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DamageDecalQuality_TypeDefinitionIndex = 26977;

	enum class DamageDecalQuality : ::System::Int32
	{
		Low = 2,
		High = 0,
		Off = 3,
		Medium = 1,
	};
}
