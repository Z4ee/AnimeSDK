#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UIDRAGCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A15C1A0)
#define UIDRAGCOMPONENT_FORBIDRIGHTMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0x1A15D770)
#define UIDRAGCOMPONENT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A15CDD0)
#define UIDRAGCOMPONENT_REGISTERCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1A15D4D0)
#define UIDRAGCOMPONENT_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A15D090)
#define UIDRAGCOMPONENT_RESET_OFFSET UNITYSDK_OFFSET(0x1A15D7C0)
#define UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1A15C270)
#define UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IDRAGHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A15C550)
#define UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IENDDRAGHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1A15C830)
#define UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A15CB10)
#define UIDRAGCOMPONENT_UNREGISTERCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1A15D620)
#define UIDRAGCOMPONENT_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A15D2B0)
#define UIDRAGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A15D820)

inline static constexpr unsigned int UIDragComponent_TypeDefinitionIndex = 77112;

class UIDragComponent : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Action_1<::UnityEngine::Vector2>* DragBeginAction; // 0x18
	::System::Action_1<::UnityEngine::Vector2>* DragEndAction; // 0x20
	::System::Action_1<::UnityEngine::Vector2>* DragAction; // 0x28
	::System::Action_1<::UnityEngine::Vector2>* TouchStartAction; // 0x30
	::System::Action_1<::UnityEngine::Vector2>* TouchEndAction; // 0x38
	::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* RawDragBeginAction; // 0x40
	::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* RawDragEndAction; // 0x48
	::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* RawDragAction; // 0x50
	::UnityEngine::RectTransform* rectTransform; // 0x58
	::System::Boolean forbidRightMouseInput; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_AWAKE_OFFSET))(this);
	}

	::System::Void UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET))(this, eventData);
	}

	::System::Void UnityEngine_EventSystems_IDragHandler_OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IDRAGHANDLER_ONDRAG_OFFSET))(this, eventData);
	}

	::System::Void UnityEngine_EventSystems_IEndDragHandler_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IENDDRAGHANDLER_ONENDDRAG_OFFSET))(this, eventData);
	}

	::System::Void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET))(this, eventData);
	}

	::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_ONPOINTERUP_OFFSET))(this, eventData);
	}

	::System::Void RegisterCallBack(::System::Action_1<::UnityEngine::Vector2>* dragBegin, ::System::Action_1<::UnityEngine::Vector2>* onDrag, ::System::Action_1<::UnityEngine::Vector2>* dragEnd, ::System::Action_1<::UnityEngine::Vector2>* touchStart, ::System::Action_1<::UnityEngine::Vector2>* touchEnd)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_REGISTERCALLBACK_OFFSET))(this, dragBegin, onDrag, dragEnd, touchStart, touchEnd);
	}

	::System::Void UnRegisterCallBack(::System::Action_1<::UnityEngine::Vector2>* dragBegin, ::System::Action_1<::UnityEngine::Vector2>* onDrag, ::System::Action_1<::UnityEngine::Vector2>* dragEnd, ::System::Action_1<::UnityEngine::Vector2>* touchStart, ::System::Action_1<::UnityEngine::Vector2>* touchEnd)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_UNREGISTERCALLBACK_OFFSET))(this, dragBegin, onDrag, dragEnd, touchStart, touchEnd);
	}

	::System::Void RegisterCallBack_1(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragBegin, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* onDrag, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragEnd)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_REGISTERCALLBACK_1_OFFSET))(this, dragBegin, onDrag, dragEnd);
	}

	::System::Void UnRegisterCallBack_1(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragBegin, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* onDrag, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragEnd)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_UNREGISTERCALLBACK_1_OFFSET))(this, dragBegin, onDrag, dragEnd);
	}

	::System::Void ForbidRightMouseInput(::System::Boolean forbid)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_FORBIDRIGHTMOUSEINPUT_OFFSET))(this, forbid);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCOMPONENT_RESET_OFFSET))(this);
	}
};
