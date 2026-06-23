#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_RemoteInputDevice_TypeDefinitionIndex = 31646;

	struct alignas(8) InputRemoting_RemoteInputDevice
	{
		::System::Int32 remoteId; // 0x10
		::System::Int32 localId; // 0x14
		::UnityEngine::InputSystem::Layouts::InputDeviceDescription description; // 0x18
	};
}
