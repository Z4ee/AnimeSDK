#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DofDebugMode_TypeDefinitionIndex = 30116;

	enum class DofDebugMode : ::System::Int32
	{
		Off = 0,
		Green = 1,
		Black = 2,
	};
}
