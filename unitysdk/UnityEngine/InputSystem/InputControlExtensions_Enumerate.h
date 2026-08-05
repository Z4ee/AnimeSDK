#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions_Enumerate_TypeDefinitionIndex = 32228;

	enum class InputControlExtensions_Enumerate : ::System::Int32
	{
		IgnoreControlsInDefaultState = 1,
		IgnoreControlsInCurrentState = 2,
		IncludeSyntheticControls = 4,
		IncludeNoisyControls = 8,
		IncludeNonLeafControls = 16,
	};
}
