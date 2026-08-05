#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/MouseButton.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class MeshCollider; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserInputSettings; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F929150)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_CREATE_OFFSET UNITYSDK_OFFSET(0x1F9290E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_CURSORUPDATED_OFFSET UNITYSDK_OFFSET(0x1F929F10)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1F92A190)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F92A1B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1F92A160)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYEVENTS_OFFSET UNITYSDK_OFFSET(0x1F92A180)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_LOOKRAY_OFFSET UNITYSDK_OFFSET(0x1F929270)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1F92A120)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1F92A0E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F92A100)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1F92A140)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_INPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9293A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_LOOKOFF_OFFSET UNITYSDK_OFFSET(0x1F929DC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_LOOKON_OFFSET UNITYSDK_OFFSET(0x1F929DF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_ONGUI_OFFSET UNITYSDK_OFFSET(0x1F929E20)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x1F929F30)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1F92A1A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F92A1C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1F92A170)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1F92A130)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1F92A0F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F92A110)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1F92A150)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F92A2F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F92A1D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ClickMeshBrowserUI_TypeDefinitionIndex = 33292;

	class ClickMeshBrowserUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::KeyCode>** StaticGet_keysToCheck()
		{
			return (::Il2CppArray<::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(ClickMeshBrowserUI_TypeDefinitionIndex)->GetStaticField(0x28920);
		}
		::UnityEngine::MeshCollider* meshCollider; // 0x18
		::System::Single maxDistance; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* keyEvents; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* keyEventsLast; // 0x30
		::System::Boolean mouseWasOver; // 0x38
		::System::Boolean _MouseHasFocus_k__BackingField; // 0x39
		::UnityEngine::Vector2 _MousePosition_k__BackingField; // 0x3C
		::ZenFulcrum::EmbeddedBrowser::MouseButton _MouseButtons_k__BackingField; // 0x44
		::UnityEngine::Vector2 _MouseScroll_k__BackingField; // 0x48
		::System::Boolean _KeyboardHasFocus_k__BackingField; // 0x50
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* _BrowserCursor_k__BackingField; // 0x58
		::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* _InputSettings_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI__CCTOR_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI* Create(::UnityEngine::MeshCollider* meshCollider)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI*(*)(::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_CREATE_OFFSET))(meshCollider);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Ray get_LookRay()
		{
			return ((::UnityEngine::Ray(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_LOOKRAY_OFFSET))(this);
		}

		::System::Void InputUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_INPUTUPDATE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_ONGUI_OFFSET))(this);
		}

		::System::Void LookOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_LOOKON_OFFSET))(this);
		}

		::System::Void LookOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_LOOKOFF_OFFSET))(this);
		}

		::System::Void CursorUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_CURSORUPDATED_OFFSET))(this);
		}

		::System::Void SetCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* newCursor)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SETCURSOR_OFFSET))(this, newCursor);
		}

		::System::Boolean get_MouseHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEHASFOCUS_OFFSET))(this);
		}

		::System::Void set_MouseHasFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEHASFOCUS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_MousePosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEPOSITION_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::MouseButton get_MouseButtons()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::MouseButton(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEBUTTONS_OFFSET))(this);
		}

		::System::Void set_MouseButtons(::ZenFulcrum::EmbeddedBrowser::MouseButton value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::MouseButton))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEBUTTONS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MouseScroll()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSESCROLL_OFFSET))(this);
		}

		::System::Void set_MouseScroll(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSESCROLL_OFFSET))(this, value);
		}

		::System::Boolean get_KeyboardHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYBOARDHASFOCUS_OFFSET))(this);
		}

		::System::Void set_KeyboardHasFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_KEYBOARDHASFOCUS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Event*>* get_KeyEvents()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYEVENTS_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* get_BrowserCursor()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_BROWSERCURSOR_OFFSET))(this);
		}

		::System::Void set_BrowserCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_BROWSERCURSOR_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* get_InputSettings()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_INPUTSETTINGS_OFFSET))(this);
		}

		::System::Void set_InputSettings(::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_INPUTSETTINGS_OFFSET))(this, value);
		}
	};
}
