#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int InputSystemUIInputModule_InputActionReferenceState_TypeDefinitionIndex = 32388;

	struct alignas(4) InputSystemUIInputModule_InputActionReferenceState
	{
		::System::Int32 refCount; // 0x10
		::System::Boolean enabledByInputModule; // 0x14
	};
}
