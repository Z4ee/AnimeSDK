#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl_ControlFlags_TypeDefinitionIndex = 32225;

	enum class InputControl_ControlFlags : ::System::Int32
	{
		ConfigUpToDate = 1,
		IsNoisy = 2,
		IsSynthetic = 4,
		IsButton = 8,
		DontReset = 16,
		SetupFinished = 32,
		UsesStateFromOtherControl = 64,
	};
}
