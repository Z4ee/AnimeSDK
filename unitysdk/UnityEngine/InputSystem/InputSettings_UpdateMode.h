#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSettings_UpdateMode_TypeDefinitionIndex = 31692;

	enum class InputSettings_UpdateMode : ::System::Int32
	{
		ProcessEventsInDynamicUpdate = 1,
		ProcessEventsInFixedUpdate = 2,
		ProcessEventsManually = 3,
	};
}
