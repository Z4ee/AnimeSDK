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

#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET UNITYSDK_OFFSET(0x1EA5DC00)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET UNITYSDK_OFFSET(0x1EA5D850)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1EA5D6D0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_CALLSTATE_OFFSET UNITYSDK_OFFSET(0x1EA5D6E0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1EA5D6A0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1EA5D6B0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1EA5D690)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EA5D700)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_REGISTERPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA5E350)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_SET_CALLSTATE_OFFSET UNITYSDK_OFFSET(0x1EA5D6F0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1EA5D6C0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_UNREGISTERPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA5E360)
#define UNITYENGINE_EVENTS_PERSISTENTCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5E380)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCall_TypeDefinitionIndex = 5494;

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

		::System::Void set_mode(::UnityEngine::Events::PersistentListenerMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::PersistentListenerMode))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_SET_MODE_OFFSET))(this, value);
		}

		::UnityEngine::Events::ArgumentCache* get_arguments()
		{
			return ((::UnityEngine::Events::ArgumentCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEventCallState get_callState()
		{
			return ((::UnityEngine::Events::UnityEventCallState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_CALLSTATE_OFFSET))(this);
		}

		::System::Void set_callState(::UnityEngine::Events::UnityEventCallState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEventCallState))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_SET_CALLSTATE_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(::UnityEngine::Events::UnityEventBase* theEvent)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::PVOID, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET))(this, theEvent);
		}

		static ::UnityEngine::Events::BaseInvokableCall* GetObjectCall(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* method, ::UnityEngine::Events::ArgumentCache* arguments)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Object*, ::System::Reflection::MethodInfo*, ::UnityEngine::Events::ArgumentCache*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET))(target, method, arguments);
		}

		::System::Void RegisterPersistentListener(::UnityEngine::Object* ttarget, ::System::String* mmethodName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_REGISTERPERSISTENTLISTENER_OFFSET))(this, ttarget, mmethodName);
		}

		::System::Void UnregisterPersistentListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_UNREGISTERPERSISTENTLISTENER_OFFSET))(this);
		}
	};
}
