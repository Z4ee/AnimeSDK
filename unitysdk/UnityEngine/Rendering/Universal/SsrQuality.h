#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SsrQuality_TypeDefinitionIndex = 26747;

	enum class SsrQuality : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		High = 2,
	};
}
