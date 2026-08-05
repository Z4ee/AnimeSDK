#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflexMode_TypeDefinitionIndex = 6142;

	enum class ReflexMode : ::System::Int32
	{
		Off = 0,
		LowLatency = 1,
		LowLatencyWithBoost = 2,
		Count = 3,
	};
}
