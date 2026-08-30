#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Events/PersistentListenerMode.h"
#include "unitysdk/UnityEngine/Events/UnityEventCallState.h"

namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class ArgumentCache; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { class UnityEventBase; }

#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET UNITYSDK_OFFSET(0x1DED8330)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET UNITYSDK_OFFSET(0x1DED7CF0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1DED7CA0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1DED7C80)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1DED7C90)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1DED7C70)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DED7CC0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_SET_CALLSTATE_OFFSET UNITYSDK_OFFSET(0x1DED7CB0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED8B20)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCall_TypeDefinitionIndex = 4483;

	class PersistentCall : public ::System::Object
	{
	public:
		::UnityEngine::Object* m_Target; // 0x10
		::System::String* m_MethodName; // 0x18
		::UnityEngine::Events::PersistentListenerMode m_Mode; // 0x20
		::UnityEngine::Events::ArgumentCache* m_Arguments; // 0x28
		::UnityEngine::Events::UnityEventCallState m_CallState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_target()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET))(this);
		}

		::System::String* get_methodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET))(this);
		}

		::UnityEngine::Events::PersistentListenerMode get_mode()
		{
			return ((::UnityEngine::Events::PersistentListenerMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET))(this);
		}

		::UnityEngine::Events::ArgumentCache* get_arguments()
		{
			return ((::UnityEngine::Events::ArgumentCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Void set_callState(::UnityEngine::Events::UnityEventCallState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEventCallState))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_SET_CALLSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(::UnityEngine::Events::UnityEventBase* a1)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::PVOID, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET))(this, a1);
		}

		static ::UnityEngine::Events::BaseInvokableCall* GetObjectCall(::UnityEngine::Object* a1, ::System::Reflection::MethodInfo* a2, ::UnityEngine::Events::ArgumentCache* a3)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Object*, ::System::Reflection::MethodInfo*, ::UnityEngine::Events::ArgumentCache*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET))(a1, a2, a3);
		}
	};
}
