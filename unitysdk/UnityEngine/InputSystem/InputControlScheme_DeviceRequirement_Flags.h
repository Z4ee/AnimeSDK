#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_DeviceRequirement_Flags_TypeDefinitionIndex = 28936;

	enum class InputControlScheme_DeviceRequirement_Flags : ::System::Int32
	{
		None = 0,
		Optional = 1,
		Or = 2,
	};
}
