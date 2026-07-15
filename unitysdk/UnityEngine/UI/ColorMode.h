#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ColorMode_TypeDefinitionIndex = 5962;

	enum class ColorMode : ::System::Int32
	{
		Single = 0,
		E2Ramp = 1,
		E4Ramp = 2,
	};
}
