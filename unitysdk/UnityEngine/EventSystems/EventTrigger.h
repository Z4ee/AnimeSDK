#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B376DE0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_DELEGATES_OFFSET UNITYSDK_OFFSET(0x1B376D30)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0x1B376D70)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1B376FF0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1B377020)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1B376FA0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1B376F40)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x1B376F50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1B377000)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1B376FE0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1B376FC0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1B376F80)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B376F60)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1B376F20)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1B376F30)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1B376F70)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1B376FB0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1B376F90)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1B377010)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1B376FD0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_DELEGATES_OFFSET UNITYSDK_OFFSET(0x1B376DB0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0x1B376DD0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B376DC0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_TypeDefinitionIndex = 6086;

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

		::System::Void set_delegates(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_DELEGATES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* get_triggers()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_TRIGGERS_OFFSET))(this);
		}

		::System::Void set_triggers(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_TRIGGERS_OFFSET))(this, a1);
		}

		::System::Void Execute(::UnityEngine::EventSystems::EventTriggerType a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDROP_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONMOVE_OFFSET))(this, a1);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONUPDATESELECTED_OFFSET))(this, a1);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONCANCEL_OFFSET))(this, a1);
		}
	};
}
