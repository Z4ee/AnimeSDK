#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DiscreteButtonControl_WriteMode_TypeDefinitionIndex = 29355;

	enum class DiscreteButtonControl_WriteMode : ::System::Int32
	{
		WriteDisabled = 0,
		WriteNullAndMaxValue = 1,
	};
}
