#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapBakeType_TypeDefinitionIndex = 4148;

	enum class LightmapBakeType : ::System::Int32
	{
		Realtime = 4,
		Baked = 2,
		Mixed = 1,
	};
}
