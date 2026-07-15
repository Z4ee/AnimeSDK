#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int StateInfoIndex_TypeDefinitionIndex = 5127;

	enum class StateInfoIndex : ::System::Int32
	{
		CurrentState = 0,
		NextState = 1,
		ExitState = 2,
		InterruptedState = 3,
	};
}
