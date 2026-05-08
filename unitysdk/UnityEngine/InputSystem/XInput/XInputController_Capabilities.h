#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_DeviceFlags.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_DeviceSubType.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_DeviceType.h"

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputController_Capabilities_TypeDefinitionIndex = 29089;

	struct alignas(4) XInputController_Capabilities
	{
		::UnityEngine::InputSystem::XInput::XInputController_DeviceType type; // 0x10
		::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType subType; // 0x14
		::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags flags; // 0x18
	};
}
