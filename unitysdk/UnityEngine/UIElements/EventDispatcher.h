#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/DispatchMode.h"
#include "unitysdk/UnityEngine/UIElements/EventDispatcher_DispatchContext.h"
#include "unitysdk/UnityEngine/UIElements/EventDispatcher_EventRecord.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IEventDispatchingStrategy; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class PointerDispatchState; }
namespace UnityEngine::UIElements { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_APPLYDISPATCHINGSTRATEGIES_OFFSET UNITYSDK_OFFSET(0x1D60E790)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_CLOSEGATE_OFFSET UNITYSDK_OFFSET(0x1D60E290)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1D604F80)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_DISPATCHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1D60DC40)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_POINTERSTATE_OFFSET UNITYSDK_OFFSET(0x1D60D610)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_OPENGATE_OFFSET UNITYSDK_OFFSET(0x1D60E2A0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENTQUEUE_OFFSET UNITYSDK_OFFSET(0x1D60E350)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1D60DC60)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D60EB90)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60D620)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcher_TypeDefinitionIndex = 5864;

	class EventDispatcher : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>** StaticGet_k_EventQueuePool()
		{
			return (::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>**)Il2CppClass::FromTypeDefinitionIndex(EventDispatcher_TypeDefinitionIndex)->GetStaticField(0x1A980);
		}
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* m_DispatchingStrategies; // 0x10
		::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* m_Queue; // 0x18
		::UnityEngine::UIElements::PointerDispatchState* _pointerState_k__BackingField; // 0x20
		::System::UInt32 m_GateCount; // 0x28
		::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>* m_DispatchContexts; // 0x30
		::System::Boolean m_Immediate; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER__CCTOR_OFFSET))();
		}

		::UnityEngine::UIElements::PointerDispatchState* get_pointerState()
		{
			return ((::UnityEngine::UIElements::PointerDispatchState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_POINTERSTATE_OFFSET))(this);
		}

		::System::Boolean get_dispatchImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_DISPATCHIMMEDIATELY_OFFSET))(this);
		}

		::System::Void Dispatch(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::IPanel* a2, ::UnityEngine::UIElements::DispatchMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::DispatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_DISPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CloseGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_CLOSEGATE_OFFSET))(this);
		}

		::System::Void OpenGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_OPENGATE_OFFSET))(this);
		}

		::System::Void ProcessEventQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENTQUEUE_OFFSET))(this);
		}

		::System::Void ProcessEvent(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::IPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyDispatchingStrategies(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::IPanel* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_APPLYDISPATCHINGSTRATEGIES_OFFSET))(this, a1, a2, a3);
		}
	};
}
