#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18AEFDB0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_DELEGATES_OFFSET UNITYSDK_OFFSET(0x18AEFD00)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0x18AEFD40)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x18AEFFB0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x18AEFFE0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x18AEFF60)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18AEFF00)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x18AEFF10)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18AEFFC0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x18AEFFA0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x18AEFF80)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x18AEFF40)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x18AEFF20)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x18AEFEE0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x18AEFEF0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x18AEFF30)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18AEFF70)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x18AEFF50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x18AEFFD0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x18AEFF90)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_DELEGATES_OFFSET UNITYSDK_OFFSET(0x18AEFD80)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0x18AEFDA0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEFD90)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_TypeDefinitionIndex = 5797;

	class EventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* m_Delegates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* get_delegates()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_DELEGATES_OFFSET))(this);
		}

		::System::Void set_delegates(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_DELEGATES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* get_triggers()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_TRIGGERS_OFFSET))(this);
		}

		::System::Void set_triggers(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_TRIGGERS_OFFSET))(this, value);
		}

		::System::Void Execute(::UnityEngine::EventSystems::EventTriggerType id, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_EXECUTE_OFFSET))(this, id, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDROP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONMOVE_OFFSET))(this, eventData);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONUPDATESELECTED_OFFSET))(this, eventData);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONCANCEL_OFFSET))(this, eventData);
		}
	};
}
