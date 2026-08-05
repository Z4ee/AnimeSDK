#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class InvokableCallList; }
namespace UnityEngine::Events { class PersistentCall; }
namespace UnityEngine::Events { class UnityEventBase; }

#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_ADDLISTENER_1_OFFSET UNITYSDK_OFFSET(0x1EA82CC0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA82C20)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EA82DA0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GETLISTENERS_OFFSET UNITYSDK_OFFSET(0x1EA82C10)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GETLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA82BB0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EA82B90)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EA834F0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERBOOLPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA83160)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTEREVENTPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA82DE0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERFLOATPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA83020)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERINTPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA82F80)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTEROBJECTPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA82EE0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERSTRINGPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA830C0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERVOIDPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA82E60)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REMOVELISTENERS_OFFSET UNITYSDK_OFFSET(0x1EA83280)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EA82D20)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_UNREGISTERPERSISTENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1EA83200)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA82B10)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCallGroup_TypeDefinitionIndex = 5495;

	class PersistentCallGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* m_Calls; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::Events::PersistentCall* GetListener(::System::Int32 index)
		{
			return ((::UnityEngine::Events::PersistentCall*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GETLISTENER_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::PersistentCall*>* GetListeners()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::PersistentCall*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GETLISTENERS_OFFSET))(this);
		}

		::System::Void AddListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_ADDLISTENER_OFFSET))(this);
		}

		::System::Void AddListener_1(::UnityEngine::Events::PersistentCall* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::PersistentCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_ADDLISTENER_1_OFFSET))(this, call);
		}

		::System::Void RemoveListener(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REMOVELISTENER_OFFSET))(this, index);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_CLEAR_OFFSET))(this);
		}

		::System::Void RegisterEventPersistentListener(::System::Int32 index, ::UnityEngine::Object* targetObj, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTEREVENTPERSISTENTLISTENER_OFFSET))(this, index, targetObj, methodName);
		}

		::System::Void RegisterVoidPersistentListener(::System::Int32 index, ::UnityEngine::Object* targetObj, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERVOIDPERSISTENTLISTENER_OFFSET))(this, index, targetObj, methodName);
		}

		::System::Void RegisterObjectPersistentListener(::System::Int32 index, ::UnityEngine::Object* targetObj, ::UnityEngine::Object* argument, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTEROBJECTPERSISTENTLISTENER_OFFSET))(this, index, targetObj, argument, methodName);
		}

		::System::Void RegisterIntPersistentListener(::System::Int32 index, ::UnityEngine::Object* targetObj, ::System::Int32 argument, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERINTPERSISTENTLISTENER_OFFSET))(this, index, targetObj, argument, methodName);
		}

		::System::Void RegisterFloatPersistentListener(::System::Int32 index, ::UnityEngine::Object* targetObj, ::System::Single argument, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERFLOATPERSISTENTLISTENER_OFFSET))(this, index, targetObj, argument, methodName);
		}

		::System::Void RegisterStringPersistentListener(::System::Int32 index, ::UnityEngine::Object* targetObj, ::System::String* argument, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERSTRINGPERSISTENTLISTENER_OFFSET))(this, index, targetObj, argument, methodName);
		}

		::System::Void RegisterBoolPersistentListener(::System::Int32 index, ::UnityEngine::Object* targetObj, ::System::Boolean argument, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REGISTERBOOLPERSISTENTLISTENER_OFFSET))(this, index, targetObj, argument, methodName);
		}

		::System::Void UnregisterPersistentListener(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_UNREGISTERPERSISTENTLISTENER_OFFSET))(this, index);
		}

		::System::Void RemoveListeners(::UnityEngine::Object* target, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_REMOVELISTENERS_OFFSET))(this, target, methodName);
		}

		::System::Void Initialize(::UnityEngine::Events::InvokableCallList* invokableList, ::UnityEngine::Events::UnityEventBase* unityEventBase)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::InvokableCallList*, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_INITIALIZE_OFFSET))(this, invokableList, unityEventBase);
		}
	};
}
