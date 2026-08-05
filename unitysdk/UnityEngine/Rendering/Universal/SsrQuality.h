#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SsrQuality_TypeDefinitionIndex = 27683;

	enum class SsrQuality : ::System::Int32
	{
		High = 2,
		Middle = 1,
		Low = 0,
	};
}
