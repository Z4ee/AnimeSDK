#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Flags_TypeDefinitionIndex = 29326;

	enum class InputControlLayout_Flags : ::System::Int32
	{
		IsGenericTypeOfDevice = 1,
		HideInUI = 2,
		IsOverride = 4,
		CanRunInBackground = 8,
		CanRunInBackgroundIsSet = 16,
	};
}
