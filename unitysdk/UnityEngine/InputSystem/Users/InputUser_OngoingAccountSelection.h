#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class InputDevice; }

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_OngoingAccountSelection_TypeDefinitionIndex = 31755;

	struct alignas(8) InputUser_OngoingAccountSelection
	{
		::UnityEngine::InputSystem::InputDevice* device; // 0x10
		::System::UInt32 userId; // 0x18
	};
}
