#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int FalloffType_TypeDefinitionIndex = 6309;

	enum class FalloffType : ::System::Byte
	{
		InverseSquared = 0x0,
		InverseSquaredNoRangeAttenuation = 0x1,
		Linear = 0x2,
		Legacy = 0x3,
		Undefined = 0x4,
	};
}
