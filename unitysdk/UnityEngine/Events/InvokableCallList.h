#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class BaseInvokableCall; }

#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1EDD8E30)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDPERSISTENTINVOKABLECALL_OFFSET UNITYSDK_OFFSET(0x1EDD8D90)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEARPERSISTENT_OFFSET UNITYSDK_OFFSET(0x1EDD9130)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EDD90E0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EDD8D60)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_PREPAREINVOKE_OFFSET UNITYSDK_OFFSET(0x1EDD9180)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EDD8ED0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDD93B0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD93A0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCallList_TypeDefinitionIndex = 5496;

	class InvokableCallList : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>** StaticGet_s_EmptyCalls()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>**)Il2CppClass::FromTypeDefinitionIndex(InvokableCallList_TypeDefinitionIndex)->GetStaticField(0x56B0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls; // 0x20
		::System::Boolean m_NeedsUpdate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Void AddPersistentInvokableCall(::UnityEngine::Events::BaseInvokableCall* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::BaseInvokableCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDPERSISTENTINVOKABLECALL_OFFSET))(this, call);
		}

		::System::Void AddListener(::UnityEngine::Events::BaseInvokableCall* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::BaseInvokableCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDLISTENER_OFFSET))(this, call);
		}

		::System::Void RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_REMOVELISTENER_OFFSET))(this, targetObj, method);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEAR_OFFSET))(this);
		}

		::System::Void ClearPersistent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEARPERSISTENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_PREPAREINVOKE_OFFSET))(this);
		}
	};
}
