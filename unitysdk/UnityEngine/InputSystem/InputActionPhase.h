#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionPhase_TypeDefinitionIndex = 28890;

	enum class InputActionPhase : ::System::Int32
	{
		Disabled = 0,
		Waiting = 1,
		Started = 2,
		Performed = 3,
		Canceled = 4,
	};
}
