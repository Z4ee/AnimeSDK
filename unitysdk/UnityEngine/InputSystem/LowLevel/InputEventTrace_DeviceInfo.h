#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x28D960)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x381830)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x577FD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x34DBE0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_DeviceInfo_TypeDefinitionIndex = 29268;

	struct alignas(8) InputEventTrace_DeviceInfo
	{
		::System::Int32 m_DeviceId; // 0x10
		::System::String* m_Layout; // 0x18
		::UnityEngine::InputSystem::Utilities::FourCC m_StateFormat; // 0x20
		::System::Int32 m_StateSizeInBytes; // 0x24
		::System::String* m_FullLayoutJson; // 0x28

		::System::Int32 get_deviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_deviceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::String* get_layout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_LAYOUT_OFFSET))(this);
		}

		::System::Void set_layout(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_LAYOUT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_STATEFORMAT_OFFSET))(this);
		}

		::System::Void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_STATEFORMAT_OFFSET))(this, value);
		}

		::System::Int32 get_stateSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_GET_STATESIZEINBYTES_OFFSET))(this);
		}

		::System::Void set_stateSizeInBytes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DEVICEINFO_SET_STATESIZEINBYTES_OFFSET))(this, value);
		}
	};
}
