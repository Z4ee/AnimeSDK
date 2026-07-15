#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TouchPhase_TypeDefinitionIndex = 5255;

	enum class TouchPhase : ::System::Int32
	{
		Began = 0,
		Moved = 1,
		Stationary = 2,
		Ended = 3,
		Canceled = 4,
	};
}
