#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_DeviceRequirement_Flags.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA59530)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA594A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA59540)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_ISAND_OFFSET UNITYSDK_OFFSET(0xA59460)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x9E6630)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_ISOR_OFFSET UNITYSDK_OFFSET(0x9E6650)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB03530)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB035C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x324D50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_ISAND_OFFSET UNITYSDK_OFFSET(0xA59470)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x9E6640)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_ISOR_OFFSET UNITYSDK_OFFSET(0x9E6660)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA59490)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_DeviceRequirement_TypeDefinitionIndex = 32211;

	struct alignas(8) InputControlScheme_DeviceRequirement
	{
		::System::String* m_ControlPath; // 0x10
		::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement_Flags m_Flags; // 0x18

		::System::String* get_controlPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_CONTROLPATH_OFFSET))(this);
		}

		::System::Void set_controlPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_CONTROLPATH_OFFSET))(this, value);
		}

		::System::Boolean get_isOptional()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_ISOPTIONAL_OFFSET))(this);
		}

		::System::Void set_isOptional(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_ISOPTIONAL_OFFSET))(this, value);
		}

		::System::Boolean get_isAND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_ISAND_OFFSET))(this);
		}

		::System::Void set_isAND(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_ISAND_OFFSET))(this, value);
		}

		::System::Boolean get_isOR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GET_ISOR_OFFSET))(this);
		}

		::System::Void set_isOR(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_SET_ISOR_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement left, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement left, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_DEVICEREQUIREMENT_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
