#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int TouchPhase_TypeDefinitionIndex = 29021;

	enum class TouchPhase : ::System::Int32
	{
		None = 0,
		Began = 1,
		Moved = 2,
		Ended = 3,
		Canceled = 4,
		Stationary = 5,
	};
}
