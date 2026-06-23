#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int WeightedMode_TypeDefinitionIndex = 5124;

	enum class WeightedMode : ::System::Int32
	{
		None = 0,
		In = 1,
		Out = 2,
		Both = 3,
	};
}
