#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1FC44410)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC44430)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1FC443F0)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1FC44450)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1FC44520)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1FC44470)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1FC44420)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC44440)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1FC44400)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1FC44460)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC446A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_DropdownItem_TypeDefinitionIndex = 19204;

	class Dropdown_DropdownItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* m_Text; // 0x18
		::UnityEngine::UI::Image* m_Image; // 0x20
		::UnityEngine::RectTransform* m_RectTransform; // 0x28
		::UnityEngine::UI::Toggle* m_Toggle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::UnityEngine::UI::Text* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TEXT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image* get_image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::UI::Image* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_IMAGE_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_rectTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_RECTTRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::UI::Toggle* get_toggle()
		{
			return ((::UnityEngine::UI::Toggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TOGGLE_OFFSET))(this);
		}

		::System::Void set_toggle(::UnityEngine::UI::Toggle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TOGGLE_OFFSET))(this, value);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONCANCEL_OFFSET))(this, eventData);
		}
	};
}
