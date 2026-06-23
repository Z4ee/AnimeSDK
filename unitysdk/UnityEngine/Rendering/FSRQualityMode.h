#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FSRQualityMode_TypeDefinitionIndex = 6147;

	enum class FSRQualityMode : ::System::Int32
	{
		Off = 0,
		Performance = 1,
		Balanced = 2,
		Quality = 3,
		NativeAA = 4,
		Count = 5,
	};
}
