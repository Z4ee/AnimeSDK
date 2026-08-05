#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputDeviceChange_TypeDefinitionIndex = 32250;

	enum class InputDeviceChange : ::System::Int32
	{
		Added = 0,
		Removed = 1,
		Disconnected = 2,
		Reconnected = 3,
		Enabled = 4,
		Disabled = 5,
		UsageChanged = 6,
		ConfigurationChanged = 7,
		SoftReset = 8,
		HardReset = 9,
		Destroyed = 10,
	};
}
