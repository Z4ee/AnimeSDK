#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterProxy_ReflectionSourceSelectionMode_TypeDefinitionIndex = 27639;

	enum class WaterProxy_ReflectionSourceSelectionMode : ::System::Int32
	{
		CustomCubemap = 0,
		MaxWeightCubemapArrayId = 2,
		CubemapArrayId = 1,
	};
}
