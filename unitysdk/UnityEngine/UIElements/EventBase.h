#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_EventPropagation.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_LifeCycleStatus.h"
#include "unitysdk/UnityEngine/UIElements/PropagationPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class PropagationPaths; }

#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_BUBBLES_OFFSET UNITYSDK_OFFSET(0x197A7D10)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_CURRENTTARGET_OFFSET UNITYSDK_OFFSET(0x197A8380)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_DISPATCHED_OFFSET UNITYSDK_OFFSET(0x197A87B0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_DISPATCH_OFFSET UNITYSDK_OFFSET(0x197A86F0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x197A7BE0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_EVENTTYPEID_OFFSET UNITYSDK_OFFSET(0x197A7BC0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_IMGUIEVENTISVALID_OFFSET UNITYSDK_OFFSET(0x197A87E0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_IMGUIEVENT_OFFSET UNITYSDK_OFFSET(0x197A8490)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ISDEFAULTPREVENTED_OFFSET UNITYSDK_OFFSET(0x197A3E80)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ISIMMEDIATEPROPAGATIONSTOPPED_OFFSET UNITYSDK_OFFSET(0x197A8320)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ISPROPAGATIONSTOPPED_OFFSET UNITYSDK_OFFSET(0x197A3C70)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_LEAFTARGET_OFFSET UNITYSDK_OFFSET(0x197A82E0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_LIFECYCLESTATUS_OFFSET UNITYSDK_OFFSET(0x197A8260)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ORIGINALMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x197A88C0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x197A7C40)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_POOLED_OFFSET UNITYSDK_OFFSET(0x197A8BD0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x197A87C0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROPAGATETOIMGUI_OFFSET UNITYSDK_OFFSET(0x197A43E0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROPAGATIONPHASE_OFFSET UNITYSDK_OFFSET(0x197A8360)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROPAGATION_OFFSET UNITYSDK_OFFSET(0x197A7C20)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_SKIPELEMENTS_OFFSET UNITYSDK_OFFSET(0x197A8300)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_STOPDISPATCH_OFFSET UNITYSDK_OFFSET(0x197A87D0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x197A6210)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_GET_TRICKLESDOWN_OFFSET UNITYSDK_OFFSET(0x197A7D00)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_INIT_OFFSET UNITYSDK_OFFSET(0x197A88E0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x197A88F0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_MARKRECEIVEDBYDISPATCHER_OFFSET UNITYSDK_OFFSET(0x197A8740)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_POSTDISPATCH_1_OFFSET UNITYSDK_OFFSET(0x197A82A0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x197A8290)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_PREDISPATCH_1_OFFSET UNITYSDK_OFFSET(0x197A39B0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0x197A8280)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_PREVENTDEFAULT_OFFSET UNITYSDK_OFFSET(0x197A43D0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_REGISTEREVENTTYPE_OFFSET UNITYSDK_OFFSET(0x197A7B60)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SETTRIGGEREVENTID_OFFSET UNITYSDK_OFFSET(0x197A7C10)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_CURRENTTARGET_OFFSET UNITYSDK_OFFSET(0x197A8390)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_DISPATCHED_OFFSET UNITYSDK_OFFSET(0x197A8720)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_DISPATCH_OFFSET UNITYSDK_OFFSET(0x197A8700)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_DONOTSENDTOROOTIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0x197A8250)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x197A7BF0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_IMGUIEVENTISVALID_OFFSET UNITYSDK_OFFSET(0x197A87F0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_IMGUIEVENT_OFFSET UNITYSDK_OFFSET(0x197A8810)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ISDEFAULTPREVENTED_OFFSET UNITYSDK_OFFSET(0x197A8350)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ISIMMEDIATEPROPAGATIONSTOPPED_OFFSET UNITYSDK_OFFSET(0x197A8330)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ISPROPAGATIONSTOPPED_OFFSET UNITYSDK_OFFSET(0x197A8310)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_LEAFTARGET_OFFSET UNITYSDK_OFFSET(0x197A82F0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_LIFECYCLESTATUS_OFFSET UNITYSDK_OFFSET(0x197A8270)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ORIGINALMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x197A88D0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x197A8030)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_POOLED_OFFSET UNITYSDK_OFFSET(0x197A8B20)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x197A82C0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROPAGATETOIMGUI_OFFSET UNITYSDK_OFFSET(0x197A5610)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROPAGATIONPHASE_OFFSET UNITYSDK_OFFSET(0x197A8370)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROPAGATION_OFFSET UNITYSDK_OFFSET(0x197A7C30)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_STOPDISPATCH_OFFSET UNITYSDK_OFFSET(0x197A5630)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x197A4690)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x197A7BD0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SET_TRIGGEREVENTID_OFFSET UNITYSDK_OFFSET(0x197A7C00)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_SKIP_OFFSET UNITYSDK_OFFSET(0x197A41B0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_STOPIMMEDIATEPROPAGATION_OFFSET UNITYSDK_OFFSET(0x197A8340)
#define UNITYENGINE_UIELEMENTS_EVENTBASE_STOPPROPAGATION_OFFSET UNITYSDK_OFFSET(0x197A43C0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A8BE0)
#define UNITYENGINE_UIELEMENTS_EVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x197A8B40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventBase_TypeDefinitionIndex = 25001;

	class EventBase : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_s_LastTypeId()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(EventBase_TypeDefinitionIndex)->GetStaticField(0x46C0);
		}
		static ::System::UInt64* StaticGet_s_NextEventId()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(EventBase_TypeDefinitionIndex)->GetStaticField(0x46C8);
		}
		::System::Int64 _timestamp_k__BackingField; // 0x10
		::System::UInt64 _eventId_k__BackingField; // 0x18
		::System::UInt64 _triggerEventId_k__BackingField; // 0x20
		::UnityEngine::UIElements::EventBase_EventPropagation _propagation_k__BackingField; // 0x28
		::UnityEngine::UIElements::PropagationPaths* m_Path; // 0x30
		::System::Boolean _doNotSendToRootIMGUIContainer_k__BackingField; // 0x38
		::UnityEngine::UIElements::EventBase_LifeCycleStatus _lifeCycleStatus_k__BackingField; // 0x3C
		::UnityEngine::UIElements::IEventHandler* _leafTarget_k__BackingField; // 0x40
		::UnityEngine::UIElements::IEventHandler* m_Target; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* _skipElements_k__BackingField; // 0x50
		::UnityEngine::UIElements::PropagationPhase _propagationPhase_k__BackingField; // 0x58
		::UnityEngine::UIElements::IEventHandler* m_CurrentTarget; // 0x60
		::UnityEngine::Event* m_ImguiEvent; // 0x68
		::UnityEngine::Vector2 _originalMousePosition_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE__CCTOR_OFFSET))();
		}

		static ::System::Int64 RegisterEventType()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_REGISTEREVENTTYPE_OFFSET))();
		}

		::System::Int64 get_eventTypeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_EVENTTYPEID_OFFSET))(this);
		}

		::System::Void set_timestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_TIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt64 get_eventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_eventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Void set_triggerEventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_TRIGGEREVENTID_OFFSET))(this, value);
		}

		::System::Void SetTriggerEventId(::System::UInt64 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SETTRIGGEREVENTID_OFFSET))(this, id);
		}

		::UnityEngine::UIElements::EventBase_EventPropagation get_propagation()
		{
			return ((::UnityEngine::UIElements::EventBase_EventPropagation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROPAGATION_OFFSET))(this);
		}

		::System::Void set_propagation(::UnityEngine::UIElements::EventBase_EventPropagation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase_EventPropagation))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROPAGATION_OFFSET))(this, value);
		}

		::UnityEngine::UIElements::PropagationPaths* get_path()
		{
			return ((::UnityEngine::UIElements::PropagationPaths*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::UnityEngine::UIElements::PropagationPaths* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::PropagationPaths*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PATH_OFFSET))(this, value);
		}

		::System::Void set_doNotSendToRootIMGUIContainer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_DONOTSENDTOROOTIMGUICONTAINER_OFFSET))(this, value);
		}

		::UnityEngine::UIElements::EventBase_LifeCycleStatus get_lifeCycleStatus()
		{
			return ((::UnityEngine::UIElements::EventBase_LifeCycleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_LIFECYCLESTATUS_OFFSET))(this);
		}

		::System::Void set_lifeCycleStatus(::UnityEngine::UIElements::EventBase_LifeCycleStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase_LifeCycleStatus))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_LIFECYCLESTATUS_OFFSET))(this, value);
		}

		::System::Void PreDispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_PREDISPATCH_OFFSET))(this);
		}

		::System::Void PreDispatch_1(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_PREDISPATCH_1_OFFSET))(this, panel);
		}

		::System::Void PostDispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_POSTDISPATCH_OFFSET))(this);
		}

		::System::Void PostDispatch_1(::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_POSTDISPATCH_1_OFFSET))(this, panel);
		}

		::System::Boolean get_bubbles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_BUBBLES_OFFSET))(this);
		}

		::System::Boolean get_tricklesDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_TRICKLESDOWN_OFFSET))(this);
		}

		::UnityEngine::UIElements::IEventHandler* get_leafTarget()
		{
			return ((::UnityEngine::UIElements::IEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_LEAFTARGET_OFFSET))(this);
		}

		::System::Void set_leafTarget(::UnityEngine::UIElements::IEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_LEAFTARGET_OFFSET))(this, value);
		}

		::UnityEngine::UIElements::IEventHandler* get_target()
		{
			return ((::UnityEngine::UIElements::IEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_target(::UnityEngine::UIElements::IEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_TARGET_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* get_skipElements()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_SKIPELEMENTS_OFFSET))(this);
		}

		::System::Boolean Skip(::UnityEngine::UIElements::IEventHandler* h)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SKIP_OFFSET))(this, h);
		}

		::System::Boolean get_isPropagationStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ISPROPAGATIONSTOPPED_OFFSET))(this);
		}

		::System::Void set_isPropagationStopped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ISPROPAGATIONSTOPPED_OFFSET))(this, value);
		}

		::System::Void StopPropagation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_STOPPROPAGATION_OFFSET))(this);
		}

		::System::Boolean get_isImmediatePropagationStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ISIMMEDIATEPROPAGATIONSTOPPED_OFFSET))(this);
		}

		::System::Void set_isImmediatePropagationStopped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ISIMMEDIATEPROPAGATIONSTOPPED_OFFSET))(this, value);
		}

		::System::Void StopImmediatePropagation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_STOPIMMEDIATEPROPAGATION_OFFSET))(this);
		}

		::System::Boolean get_isDefaultPrevented()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ISDEFAULTPREVENTED_OFFSET))(this);
		}

		::System::Void set_isDefaultPrevented(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ISDEFAULTPREVENTED_OFFSET))(this, value);
		}

		::System::Void PreventDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_PREVENTDEFAULT_OFFSET))(this);
		}

		::UnityEngine::UIElements::PropagationPhase get_propagationPhase()
		{
			return ((::UnityEngine::UIElements::PropagationPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROPAGATIONPHASE_OFFSET))(this);
		}

		::System::Void set_propagationPhase(::UnityEngine::UIElements::PropagationPhase value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::PropagationPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROPAGATIONPHASE_OFFSET))(this, value);
		}

		::UnityEngine::UIElements::IEventHandler* get_currentTarget()
		{
			return ((::UnityEngine::UIElements::IEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_CURRENTTARGET_OFFSET))(this);
		}

		::System::Void set_currentTarget(::UnityEngine::UIElements::IEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_CURRENTTARGET_OFFSET))(this, value);
		}

		::System::Boolean get_dispatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_DISPATCH_OFFSET))(this);
		}

		::System::Void set_dispatch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_DISPATCH_OFFSET))(this, value);
		}

		::System::Void MarkReceivedByDispatcher()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_MARKRECEIVEDBYDISPATCHER_OFFSET))(this);
		}

		::System::Boolean get_dispatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_DISPATCHED_OFFSET))(this);
		}

		::System::Void set_dispatched(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_DISPATCHED_OFFSET))(this, value);
		}

		::System::Boolean get_processed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROCESSED_OFFSET))(this);
		}

		::System::Void set_processed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROCESSED_OFFSET))(this, value);
		}

		::System::Boolean get_stopDispatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_STOPDISPATCH_OFFSET))(this);
		}

		::System::Void set_stopDispatch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_STOPDISPATCH_OFFSET))(this, value);
		}

		::System::Boolean get_propagateToIMGUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_PROPAGATETOIMGUI_OFFSET))(this);
		}

		::System::Void set_propagateToIMGUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_PROPAGATETOIMGUI_OFFSET))(this, value);
		}

		::System::Boolean get_imguiEventIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_IMGUIEVENTISVALID_OFFSET))(this);
		}

		::System::Void set_imguiEventIsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_IMGUIEVENTISVALID_OFFSET))(this, value);
		}

		::UnityEngine::Event* get_imguiEvent()
		{
			return ((::UnityEngine::Event*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_IMGUIEVENT_OFFSET))(this);
		}

		::System::Void set_imguiEvent(::UnityEngine::Event* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_IMGUIEVENT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_originalMousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_ORIGINALMOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_originalMousePosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_ORIGINALMOUSEPOSITION_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_LOCALINIT_OFFSET))(this);
		}

		::System::Boolean get_pooled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_GET_POOLED_OFFSET))(this);
		}

		::System::Void set_pooled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTBASE_SET_POOLED_OFFSET))(this, value);
		}
	};
}
