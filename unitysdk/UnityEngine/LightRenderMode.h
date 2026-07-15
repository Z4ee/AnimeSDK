#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightRenderMode_TypeDefinitionIndex = 4146;

	enum class LightRenderMode : ::System::Int32
	{
		Auto = 0,
		ForcePixel = 1,
		ForceVertex = 2,
	};
}
