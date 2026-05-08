#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int TriggerEffectMode_TypeDefinitionIndex = 37447;

	enum class TriggerEffectMode : ::System::Int32
	{
		Off = 0,
		Feedback = 1,
		Weapon = 2,
		Vibration = 3,
	};
}
