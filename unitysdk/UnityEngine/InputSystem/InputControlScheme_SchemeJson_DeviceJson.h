#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_DEVICEJSON_FROM_OFFSET UNITYSDK_OFFSET(0x1DF774E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_DEVICEJSON_TODEVICEENTRY_OFFSET UNITYSDK_OFFSET(0xA4E7A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_SchemeJson_DeviceJson_TypeDefinitionIndex = 31594;

	struct alignas(8) InputControlScheme_SchemeJson_DeviceJson
	{
		::System::String* devicePath; // 0x10
		::System::Boolean isOptional; // 0x18
		::System::Boolean isOR; // 0x19

		/*
		::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement ToDeviceEntry()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_DEVICEJSON_TODEVICEENTRY_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::InputControlScheme_SchemeJson_DeviceJson From(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement requirement)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_SchemeJson_DeviceJson(*)(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_DEVICEJSON_FROM_OFFSET))(requirement);
		}
		*/
	};
}
