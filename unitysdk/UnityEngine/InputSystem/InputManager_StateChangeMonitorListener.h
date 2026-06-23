#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_StateChangeMonitorListener_TypeDefinitionIndex = 31685;

	struct alignas(8) InputManager_StateChangeMonitorListener
	{
		::UnityEngine::InputSystem::InputControl* control; // 0x10
		::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor; // 0x18
		::System::Int64 monitorIndex; // 0x20
	};
}
