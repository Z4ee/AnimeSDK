#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DamageDecalQuality_TypeDefinitionIndex = 26951;

	enum class DamageDecalQuality : ::System::Int32
	{
		Low = 2,
		Medium = 1,
		High = 0,
		Off = 3,
	};
}
