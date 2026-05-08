#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DamageDecalQuality_TypeDefinitionIndex = 29822;

	enum class DamageDecalQuality : ::System::Int32
	{
		High = 0,
		Medium = 1,
		Low = 2,
		Off = 3,
	};
}
