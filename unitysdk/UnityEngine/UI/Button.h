#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define UNITYENGINE_UI_BUTTON_FORBIDCLICK_OFFSET UNITYSDK_OFFSET(0x1B382FD0)
#define UNITYENGINE_UI_BUTTON_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1B382B60)
#define UNITYENGINE_UI_BUTTON_IGNOREPOINTDISTANCECHECK_OFFSET UNITYSDK_OFFSET(0x1B382FC0)
#define UNITYENGINE_UI_BUTTON_ONFINISHSUBMIT_OFFSET UNITYSDK_OFFSET(0x1B382F60)
#define UNITYENGINE_UI_BUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1B382C30)
#define UNITYENGINE_UI_BUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1B382E20)
#define UNITYENGINE_UI_BUTTON_PRESS_OFFSET UNITYSDK_OFFSET(0x1B382B80)
#define UNITYENGINE_UI_BUTTON_SET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1B382B70)
#define UNITYENGINE_UI_BUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B382A00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Button_TypeDefinitionIndex = 5847;

	class Button : public ::UnityEngine::UI::Selectable
	{
	public:
		::UnityEngine::UI::Button_ButtonClickedEvent* m_OnClick; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Button_ButtonClickedEvent* get_onClick()
		{
			return ((::UnityEngine::UI::Button_ButtonClickedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_GET_ONCLICK_OFFSET))(this);
		}

		::System::Void set_onClick(::UnityEngine::UI::Button_ButtonClickedEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button_ButtonClickedEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_SET_ONCLICK_OFFSET))(this, a1);
		}

		::System::Void Press()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_PRESS_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OnFinishSubmit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_ONFINISHSUBMIT_OFFSET))(this);
		}

		::System::Boolean IgnorePointDistanceCheck(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_IGNOREPOINTDISTANCECHECK_OFFSET))(this, a1);
		}

		::System::Boolean ForbidClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_FORBIDCLICK_OFFSET))(this);
		}
	};
}
