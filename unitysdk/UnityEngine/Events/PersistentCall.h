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

#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET UNITYSDK_OFFSET(0x18A081A0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET UNITYSDK_OFFSET(0x18A07C40)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18A07BF0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x18A07BD0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x18A07BE0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x18A07BC0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET UNITYSDK_OFFSET(0x18A07C10)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_SET_CALLSTATE_OFFSET UNITYSDK_OFFSET(0x18A07C00)
#define UNITYENGINE_EVENTS_PERSISTENTCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A08940)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCall_TypeDefinitionIndex = 4292;

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
	};
}
