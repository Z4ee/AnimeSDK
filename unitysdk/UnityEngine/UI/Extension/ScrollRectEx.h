#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ScrollRect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class ScrollRectEx_ScrollRectExEvent; }

#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_MOVECONTENT_OFFSET UNITYSDK_OFFSET(0x18EBDB60)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x18EBD3F0)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18EBD4A0)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18EBD550)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18EBD380)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_RESETPOS_OFFSET UNITYSDK_OFFSET(0x18EBD650)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_SETCONTENTANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x18EBD780)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBE0E0)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x18EBE190)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18EBE1A0)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18EBE1B0)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x18EBE260)
#define UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_SETCONTENTANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x18EBE270)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ScrollRectEx_TypeDefinitionIndex = 57718;

	class ScrollRectEx : public ::UnityEngine::UI::ScrollRect
	{
	public:
		::UnityEngine::RectTransform* MustMaxRect; // 0x130
		::UnityEngine::UI::Extension::ScrollRectEx_ScrollRectExEvent* OnBeginDragAct; // 0x138
		::UnityEngine::UI::Extension::ScrollRectEx_ScrollRectExEvent* OnDragAct; // 0x140
		::UnityEngine::UI::Extension::ScrollRectEx_ScrollRectExEvent* OnEndDragAct; // 0x148
		::System::Action* OnPosChange; // 0x150
		::System::Boolean DisableMouseScroll; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX__CTOR_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONSCROLL_OFFSET))(this, data);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_ONENDDRAG_OFFSET))(this, eventData);
		}

		::UnityEngine::Vector2 ResetPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_RESETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector2 MoveContent(::UnityEngine::Vector2 uguiDelta, ::System::Boolean applyElastic)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_MOVECONTENT_OFFSET))(this, uguiDelta, applyElastic);
		}

		::System::Void SetContentAnchoredPosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX_SETCONTENTANCHOREDPOSITION_OFFSET))(this, position);
		}

		::System::Void __base_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONENDDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnScroll(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_ONSCROLL_OFFSET))(this, P0);
		}

		::System::Void __base_SetContentAnchoredPosition(::UnityEngine::Vector2 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SCROLLRECTEX___BASE_SETCONTENTANCHOREDPOSITION_OFFSET))(this, P0);
		}
	};
}
