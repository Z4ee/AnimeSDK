#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x97A2A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x97A1C0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97A2B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_APINAME_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE5EB80)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE5EC60)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97A1B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x97A130)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserAccountHandle_TypeDefinitionIndex = 32378;

	struct alignas(8) InputUserAccountHandle
	{
		::System::String* m_ApiName; // 0x10
		::System::UInt64 m_Handle; // 0x18

		::System::Void _ctor(::System::String* apiName, ::System::UInt64 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE__CTOR_OFFSET))(this, apiName, handle);
		}

		::System::String* get_apiName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_APINAME_OFFSET))(this);
		}

		::System::UInt64 get_handle()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_HANDLE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Users::InputUserAccountHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Users::InputUserAccountHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle, ::UnityEngine::InputSystem::Users::InputUserAccountHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle, ::UnityEngine::InputSystem::Users::InputUserAccountHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
