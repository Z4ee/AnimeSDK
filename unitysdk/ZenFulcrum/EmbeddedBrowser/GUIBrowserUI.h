#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/MouseButton.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserInputSettings; }

#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FBC1D60)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1FBC3050)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1FBC3070)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1FBC3020)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_KEYEVENTS_OFFSET UNITYSDK_OFFSET(0x1FBC3040)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1FBC2FE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1FBC2D00)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FBC2FC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1FBC3000)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_INPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1FBC2200)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1FBC30A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FBC2090)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONGUI_OFFSET UNITYSDK_OFFSET(0x1FBC2D20)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1FBC30F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1FBC30B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1FBC30D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1FBC3090)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x1FBC2E10)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1FBC3060)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1FBC3080)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1FBC2FF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FBC2FD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1FBC3010)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1FBC21B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_WATCHRESIZE_OFFSET UNITYSDK_OFFSET(0x1FBC2160)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__AWAKE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FBC3290)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC3170)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int GUIBrowserUI_TypeDefinitionIndex = 33295;

	class GUIBrowserUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::RawImage* myImage; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x20
		::System::Boolean enableInput; // 0x28
		::System::Boolean autoResize; // 0x29
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* keyEvents; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* keyEventsLast; // 0x38
		::UnityEngine::EventSystems::BaseRaycaster* raycaster; // 0x40
		::UnityEngine::RectTransform* rTransform; // 0x48
		::System::Boolean _mouseHasFocus; // 0x50
		::UnityEngine::Vector2 _MousePosition_k__BackingField; // 0x54
		::ZenFulcrum::EmbeddedBrowser::MouseButton _MouseButtons_k__BackingField; // 0x5C
		::UnityEngine::Vector2 _MouseScroll_k__BackingField; // 0x60
		::System::Boolean _keyboardHasFocus; // 0x68
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* _BrowserCursor_k__BackingField; // 0x70
		::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* _InputSettings_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONENABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WatchResize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_WATCHRESIZE_OFFSET))(this);
		}

		::System::Void UpdateTexture(::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_UPDATETEXTURE_OFFSET))(this, texture);
		}

		::System::Void InputUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_INPUTUPDATE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONGUI_OFFSET))(this);
		}

		::System::Void SetCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* newCursor)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SETCURSOR_OFFSET))(this, newCursor);
		}

		::System::Boolean get_MouseHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSEHASFOCUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_MousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_MousePosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_MOUSEPOSITION_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::MouseButton get_MouseButtons()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::MouseButton(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSEBUTTONS_OFFSET))(this);
		}

		::System::Void set_MouseButtons(::ZenFulcrum::EmbeddedBrowser::MouseButton value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::MouseButton))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_MOUSEBUTTONS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MouseScroll()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_MOUSESCROLL_OFFSET))(this);
		}

		::System::Void set_MouseScroll(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_MOUSESCROLL_OFFSET))(this, value);
		}

		::System::Boolean get_KeyboardHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_KEYBOARDHASFOCUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Event*>* get_KeyEvents()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_KEYEVENTS_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* get_BrowserCursor()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_BROWSERCURSOR_OFFSET))(this);
		}

		::System::Void set_BrowserCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_BROWSERCURSOR_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* get_InputSettings()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_GET_INPUTSETTINGS_OFFSET))(this);
		}

		::System::Void set_InputSettings(::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_SET_INPUTSETTINGS_OFFSET))(this, value);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void _Awake_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__AWAKE_B__4_0_OFFSET))(this);
		}
	};
}
