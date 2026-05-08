#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_DeviceDisableScope_TypeDefinitionIndex = 29027;

	enum class InputManager_DeviceDisableScope : ::System::Int32
	{
		Everywhere = 0,
		InFrontendOnly = 1,
		TemporaryWhilePlayerIsInBackground = 2,
	};
}
