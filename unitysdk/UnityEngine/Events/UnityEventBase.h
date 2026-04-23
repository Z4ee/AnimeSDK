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

#define UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET UNITYSDK_OFFSET(0x1A442850)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1A443530)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET UNITYSDK_OFFSET(0x1A442E80)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1A442EE0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x1A441980)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A443300)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTMETHODNAME_OFFSET UNITYSDK_OFFSET(0x1A4433B0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTTARGET_OFFSET UNITYSDK_OFFSET(0x1A443330)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1A442930)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A4435E0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET UNITYSDK_OFFSET(0x1A442DC0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1A443430)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1A443590)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1A4428E0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_SETPERSISTENTLISTENERSTATE_OFFSET UNITYSDK_OFFSET(0x1A443470)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A443690)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A442E20)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A442E10)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A442660)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEventBase_TypeDefinitionIndex = 4297;

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

		::System::Reflection::MethodInfo* FindMethod(::UnityEngine::Events::PersistentCall* call)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::UnityEngine::Events::PersistentCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET))(this, call);
		}

		::System::Reflection::MethodInfo* FindMethod_1(::System::String* name, ::System::Object* listener, ::UnityEngine::Events::PersistentListenerMode mode, ::System::Type* argumentType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::Events::PersistentListenerMode, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_1_OFFSET))(this, name, listener, mode, argumentType);
		}

		::System::Int32 GetPersistentEventCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTEVENTCOUNT_OFFSET))(this);
		}

		::UnityEngine::Object* GetPersistentTarget(::System::Int32 index)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTTARGET_OFFSET))(this, index);
		}

		::System::String* GetPersistentMethodName(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTMETHODNAME_OFFSET))(this, index);
		}

		::System::Void DirtyPersistentCalls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET))(this);
		}

		::System::Void RebuildPersistentCallsIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET))(this);
		}

		::System::Void SetPersistentListenerState(::System::Int32 index, ::UnityEngine::Events::UnityEventCallState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Events::UnityEventCallState))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_SETPERSISTENTLISTENERSTATE_OFFSET))(this, index, state);
		}

		::System::Void AddListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDLISTENER_OFFSET))(this, targetObj, method);
		}

		::System::Void AddCall(::UnityEngine::Events::BaseInvokableCall* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::BaseInvokableCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET))(this, call);
		}

		::System::Void RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET))(this, targetObj, method);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET))(this);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_INVOKE_OFFSET))(this, parameters);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::MethodInfo* GetValidMethodInfo(::System::Object* obj, ::System::String* functionName, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET))(obj, functionName, argumentTypes);
		}
	};
}
