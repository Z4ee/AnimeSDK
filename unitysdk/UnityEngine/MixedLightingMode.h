#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MixedLightingMode_TypeDefinitionIndex = 4149;

	enum class MixedLightingMode : ::System::Int32
	{
		IndirectOnly = 0,
		Shadowmask = 2,
		Subtractive = 1,
	};
}
