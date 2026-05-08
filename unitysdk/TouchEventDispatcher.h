#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EventAndReceivers.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { template <typename T> class ExecuteEvents_EventFunction_1; }

#define TOUCHEVENTDISPATCHER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1A15A1A0)
#define TOUCHEVENTDISPATCHER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A15A760)
#define TOUCHEVENTDISPATCHER_ONDROP_OFFSET UNITYSDK_OFFSET(0x1A15AD20)
#define TOUCHEVENTDISPATCHER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1A15AA40)
#define TOUCHEVENTDISPATCHER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1A15A480)
#define TOUCHEVENTDISPATCHER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1A159900)
#define TOUCHEVENTDISPATCHER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A15B2E0)
#define TOUCHEVENTDISPATCHER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1A159BE0)
#define TOUCHEVENTDISPATCHER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1A159EC0)
#define TOUCHEVENTDISPATCHER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A15B5C0)
#define TOUCHEVENTDISPATCHER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1A15B000)
#define TOUCHEVENTDISPATCHER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1A1598B0)
#define TOUCHEVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A15B8A0)

inline static constexpr unsigned int TouchEventDispatcher_TypeDefinitionIndex = 50584;

class TouchEventDispatcher : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* m_dispatcherName; // 0x18
	::System::Boolean m_penetrateEvents; // 0x20
	::Il2CppArray<::EventAndReceivers>* m_receivers; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER__CTOR_OFFSET))(this);
	}

	::System::Void SetActive(::System::Boolean active)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_SETACTIVE_OFFSET))(this, active);
	}

	::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONPOINTERCLICK_OFFSET))(this, eventData);
	}

	::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONPOINTERENTER_OFFSET))(this, eventData);
	}

	::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONPOINTEREXIT_OFFSET))(this, eventData);
	}

	::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONBEGINDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONENDDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONDROP_OFFSET))(this, eventData);
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONSCROLL_OFFSET))(this, eventData);
	}

	::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONPOINTERDOWN_OFFSET))(this, eventData);
	}

	::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TOUCHEVENTDISPATCHER_ONPOINTERUP_OFFSET))(this, eventData);
	}
};
