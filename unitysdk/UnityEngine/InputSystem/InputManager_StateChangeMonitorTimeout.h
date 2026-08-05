#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_StateChangeMonitorTimeout_TypeDefinitionIndex = 32307;

	struct alignas(8) InputManager_StateChangeMonitorTimeout
	{
		::UnityEngine::InputSystem::InputControl* control; // 0x10
		::System::Double time; // 0x18
		::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor; // 0x20
		::System::Int64 monitorIndex; // 0x28
		::System::Int32 timerIndex; // 0x30
	};
}
