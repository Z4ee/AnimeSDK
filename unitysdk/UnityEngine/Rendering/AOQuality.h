#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AOQuality_TypeDefinitionIndex = 4822;

	enum class AOQuality : ::System::Int32
	{
		Low = 0,
		Medium = 1,
		High = 2,
		VeryHigh = 3,
	};
}
