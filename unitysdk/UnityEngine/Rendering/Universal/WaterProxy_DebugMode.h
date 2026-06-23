#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterProxy_DebugMode_TypeDefinitionIndex = 26203;

	enum class WaterProxy_DebugMode : ::System::Int32
	{
		screen = 2,
		none = 0,
		stationary = 1,
	};
}
