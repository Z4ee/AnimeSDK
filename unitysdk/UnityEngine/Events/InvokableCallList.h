#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class BaseInvokableCall; }

#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x18A07780)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDPERSISTENTINVOKABLECALL_OFFSET UNITYSDK_OFFSET(0x18A07750)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEARPERSISTENT_OFFSET UNITYSDK_OFFSET(0x18A07A00)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x18A079B0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_PREPAREINVOKE_OFFSET UNITYSDK_OFFSET(0x18A07A50)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x18A077B0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18A07B40)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCallList_TypeDefinitionIndex = 4294;

	class InvokableCallList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls; // 0x20
		::System::Boolean m_NeedsUpdate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST__CTOR_OFFSET))(this);
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
