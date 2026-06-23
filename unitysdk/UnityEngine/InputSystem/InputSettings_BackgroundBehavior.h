#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSettings_BackgroundBehavior_TypeDefinitionIndex = 31693;

	enum class InputSettings_BackgroundBehavior : ::System::Int32
	{
		ResetAndDisableNonBackgroundDevices = 0,
		ResetAndDisableAllDevices = 1,
		IgnoreFocus = 2,
	};
}
