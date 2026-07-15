#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngineInternal
{
	inline static constexpr unsigned int LightmapType_TypeDefinitionIndex = 3908;

	enum class LightmapType : ::System::Int32
	{
		NoLightmap = -1,
		StaticLightmap = 0,
		DynamicLightmap = 1,
	};
}
