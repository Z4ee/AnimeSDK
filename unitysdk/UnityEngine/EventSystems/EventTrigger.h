#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EE08E80)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_DELEGATES_OFFSET UNITYSDK_OFFSET(0x1EE08D70)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0x1EE08DE0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1EE090F0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1EE09120)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1EE090A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1EE09040)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x1EE09050)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1EE09100)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1EE090E0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1EE090C0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1EE09080)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1EE09060)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1EE09020)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1EE09030)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1EE09070)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1EE090B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1EE09090)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1EE09110)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1EE090D0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_DELEGATES_OFFSET UNITYSDK_OFFSET(0x1EE08E50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0x1EE08E70)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE08E60)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_TypeDefinitionIndex = 6921;

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
