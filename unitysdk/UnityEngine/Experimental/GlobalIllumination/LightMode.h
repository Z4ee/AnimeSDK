#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightMode_TypeDefinitionIndex = 6308;

	enum class LightMode : ::System::Byte
	{
		Realtime = 0x0,
		Mixed = 0x1,
		Baked = 0x2,
		Unknown = 0x3,
	};
}
