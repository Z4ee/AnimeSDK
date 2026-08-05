#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualSenseHIDOutputReport_Flags_TypeDefinitionIndex = 39736;

	enum class DualSenseHIDOutputReport_Flags : ::System::Int32
	{
		Rumble = 1,
		VibrationModeCompatible = 2,
	};
}
