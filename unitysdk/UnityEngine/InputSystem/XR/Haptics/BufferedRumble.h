#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/XR/Haptics/HapticCapabilities.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_ENQUEUERUMBLE_OFFSET UNITYSDK_OFFSET(0x92A870)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x388220)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x387FA0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x92A860)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int BufferedRumble_TypeDefinitionIndex = 31732;

	struct alignas(8) BufferedRumble
	{
		::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities _capabilities_k__BackingField; // 0x10
		::UnityEngine::InputSystem::InputDevice* _device_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE__CTOR_OFFSET))(this, device);
		}

		::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities()
		{
			return ((::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_CAPABILITIES_OFFSET))(this);
		}

		::System::Void set_capabilities(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_CAPABILITIES_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_device(::UnityEngine::InputSystem::InputDevice* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_DEVICE_OFFSET))(this, value);
		}

		::System::Void EnqueueRumble(::Il2CppArray<::System::Byte>* samples)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_ENQUEUERUMBLE_OFFSET))(this, samples);
		}
	};
}
