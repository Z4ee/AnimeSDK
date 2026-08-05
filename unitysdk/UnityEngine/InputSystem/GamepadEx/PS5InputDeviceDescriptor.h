#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5INPUTDEVICEDESCRIPTOR_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1F160FC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5INPUTDEVICEDESCRIPTOR_TOJSON_OFFSET UNITYSDK_OFFSET(0x1F165F70)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5INPUTDEVICEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F165FC0)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int PS5InputDeviceDescriptor_TypeDefinitionIndex = 39746;

	class PS5InputDeviceDescriptor : public ::System::Object
	{
	public:
		::System::UInt32 slotId; // 0x10
		::System::Boolean isAimController; // 0x14
		::System::UInt32 defaultColorId; // 0x18
		::System::UInt32 userId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5INPUTDEVICEDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5INPUTDEVICEDESCRIPTOR_TOJSON_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::GamepadEx::PS5InputDeviceDescriptor* FromJson(::System::String* json)
		{
			return ((::UnityEngine::InputSystem::GamepadEx::PS5InputDeviceDescriptor*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5INPUTDEVICEDESCRIPTOR_FROMJSON_OFFSET))(json);
		}
	};
}
