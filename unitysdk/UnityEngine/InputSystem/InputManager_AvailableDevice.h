#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_AvailableDevice_TypeDefinitionIndex = 29028;

	struct alignas(8) InputManager_AvailableDevice
	{
		::UnityEngine::InputSystem::Layouts::InputDeviceDescription description; // 0x10
		::System::Int32 deviceId; // 0x48
		::System::Boolean isNative; // 0x4C
		::System::Boolean isRemoved; // 0x4D
	};
}
