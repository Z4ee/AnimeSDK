#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState_TriggerState_Flags_TypeDefinitionIndex = 32187;

	enum class InputActionState_TriggerState_Flags : ::System::Int32
	{
		HaveMagnitude = 1,
		PassThrough = 2,
		MayNeedConflictResolution = 4,
		HasMultipleConcurrentActuations = 8,
		InProcessing = 16,
		Button = 32,
		Pressed = 64,
	};
}
