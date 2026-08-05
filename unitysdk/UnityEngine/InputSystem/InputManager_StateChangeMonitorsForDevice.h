#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/DynamicBitfield.h"
#include "unitysdk/UnityEngine/InputSystem/InputManager_StateChangeMonitorListener.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/MemoryHelpers_BitRegion.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_ADD_OFFSET UNITYSDK_OFFSET(0xA5B6F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA5B710)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_COMPACTARRAYS_OFFSET UNITYSDK_OFFSET(0xA5B750)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x32E550)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0xA5B760)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA5B700)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_StateChangeMonitorsForDevice_TypeDefinitionIndex = 32306;

	struct alignas(8) InputManager_StateChangeMonitorsForDevice
	{
		::Il2CppArray<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>* memoryRegions; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener>* listeners; // 0x18
		::UnityEngine::InputSystem::DynamicBitfield signalled; // 0x20
		::System::Boolean needToCompactArrays; // 0x40

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_ADD_OFFSET))(this, control, monitor, monitorIndex);
		}

		::System::Void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex, ::System::Boolean deferRemoval)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVE_OFFSET))(this, monitor, monitorIndex, deferRemoval);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_CLEAR_OFFSET))(this);
		}

		::System::Void CompactArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_COMPACTARRAYS_OFFSET))(this);
		}

		::System::Void RemoveAt(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVEAT_OFFSET))(this, i);
		}
	};
}
