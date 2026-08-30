#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Events/PersistentListenerMode.h"
#include "unitysdk/UnityEngine/Events/UnityEventCallState.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { class InvokableCallList; }
namespace UnityEngine::Events { class PersistentCall; }
namespace UnityEngine::Events { class PersistentCallGroup; }

#define UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET UNITYSDK_OFFSET(0x1ED22110)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1ED22F50)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET UNITYSDK_OFFSET(0x1ED22A20)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1ED22A80)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x1ED21110)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ED22D60)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTMETHODNAME_OFFSET UNITYSDK_OFFSET(0x1ED22DF0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTTARGET_OFFSET UNITYSDK_OFFSET(0x1ED22D90)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1ED222A0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ED230C0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET UNITYSDK_OFFSET(0x1ED22960)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1ED22E60)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1ED23070)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1ED22250)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_SETPERSISTENTLISTENERSTATE_OFFSET UNITYSDK_OFFSET(0x1ED22EA0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED23220)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED229C0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED229B0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED21EE0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEventBase_TypeDefinitionIndex = 4486;

	class UnityEventBase : public ::System::Object
	{
	public:
		::UnityEngine::Events::InvokableCallList* m_Calls; // 0x10
		::UnityEngine::Events::PersistentCallGroup* m_PersistentCalls; // 0x18
		::System::Boolean m_CallsDirty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* FindMethod(::UnityEngine::Events::PersistentCall* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::UnityEngine::Events::PersistentCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* FindMethod_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::Events::PersistentListenerMode a3, ::System::Type* a4)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::Events::PersistentListenerMode, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetPersistentEventCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTEVENTCOUNT_OFFSET))(this);
		}

		::UnityEngine::Object* GetPersistentTarget(::System::Int32 a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTTARGET_OFFSET))(this, a1);
		}

		::System::String* GetPersistentMethodName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTMETHODNAME_OFFSET))(this, a1);
		}

		::System::Void DirtyPersistentCalls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET))(this);
		}

		::System::Void RebuildPersistentCallsIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET))(this);
		}

		::System::Void SetPersistentListenerState(::System::Int32 a1, ::UnityEngine::Events::UnityEventCallState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Events::UnityEventCallState))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_SETPERSISTENTLISTENERSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void AddListener(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void AddCall(::UnityEngine::Events::BaseInvokableCall* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::BaseInvokableCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET))(this, a1);
		}

		::System::Void RemoveListener(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET))(this);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_INVOKE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::MethodInfo* GetValidMethodInfo(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET))(a1, a2, a3);
		}
	};
}
