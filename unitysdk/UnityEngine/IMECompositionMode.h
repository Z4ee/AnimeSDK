#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int IMECompositionMode_TypeDefinitionIndex = 5256;

	enum class IMECompositionMode : ::System::Int32
	{
		Auto = 0,
		On = 1,
		Off = 2,
	};
}
