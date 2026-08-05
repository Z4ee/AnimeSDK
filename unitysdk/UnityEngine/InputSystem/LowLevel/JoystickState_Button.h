#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int JoystickState_Button_TypeDefinitionIndex = 32501;

	enum class JoystickState_Button : ::System::Int32
	{
		HatSwitchUp = 0,
		HatSwitchDown = 1,
		HatSwitchLeft = 2,
		HatSwitchRight = 3,
		Trigger = 4,
	};
}
