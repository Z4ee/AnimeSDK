#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GamepadButton_TypeDefinitionIndex = 31873;

	enum class GamepadButton : ::System::Int32
	{
		DpadUp = 0,
		DpadDown = 1,
		DpadLeft = 2,
		DpadRight = 3,
		North = 4,
		East = 5,
		South = 6,
		West = 7,
		LeftStick = 8,
		RightStick = 9,
		LeftShoulder = 10,
		RightShoulder = 11,
		Start = 12,
		Select = 13,
		LeftTrigger = 32,
		RightTrigger = 33,
		X = 7,
		Y = 4,
		A = 6,
		B = 5,
		Cross = 6,
		Square = 7,
		Triangle = 4,
		Circle = 5,
	};
}
