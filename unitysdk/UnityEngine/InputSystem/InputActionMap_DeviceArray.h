#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_GET_OFFSET UNITYSDK_OFFSET(0x9A6640)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9A6450)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x9A6510)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_SET_OFFSET UNITYSDK_OFFSET(0x9A6680)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_DeviceArray_TypeDefinitionIndex = 32156;

	struct alignas(8) InputActionMap_DeviceArray
	{
		::System::Boolean m_HaveValue; // 0x10
		::System::Int32 m_DeviceCount; // 0x14
		::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* m_DeviceArray; // 0x18

		::System::Int32 IndexOf(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_INDEXOF_OFFSET))(this, device);
		}

		::System::Boolean Remove(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_REMOVE_OFFSET))(this, device);
		}

		/*
		::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> Get()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_GET_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DEVICEARRAY_SET_OFFSET))(this, devices);
		}
		*/
	};
}
