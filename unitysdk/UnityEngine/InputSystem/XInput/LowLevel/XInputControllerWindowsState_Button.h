#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::XInput::LowLevel
{
	inline static constexpr unsigned int XInputControllerWindowsState_Button_TypeDefinitionIndex = 31749;

	enum class XInputControllerWindowsState_Button : ::System::Int32
	{
		DPadUp = 0,
		DPadDown = 1,
		DPadLeft = 2,
		DPadRight = 3,
		Start = 4,
		Select = 5,
		LeftThumbstickPress = 6,
		RightThumbstickPress = 7,
		LeftShoulder = 8,
		RightShoulder = 9,
		A = 12,
		B = 13,
		X = 14,
		Y = 15,
	};
}
