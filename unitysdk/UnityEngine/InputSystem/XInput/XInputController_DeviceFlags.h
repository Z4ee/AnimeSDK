#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputController_DeviceFlags_TypeDefinitionIndex = 31744;

	enum class XInputController_DeviceFlags : ::System::Int32
	{
		ForceFeedbackSupported = 1,
		Wireless = 2,
		VoiceSupported = 4,
		PluginModulesSupported = 8,
		NoNavigation = 16,
	};
}
