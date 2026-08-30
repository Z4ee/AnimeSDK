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

#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C7E4770)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7E4700)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_CURSORUPDATED_OFFSET UNITYSDK_OFFSET(0x1C7E55C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1C7E58D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C7E58F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1C7E58A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYEVENTS_OFFSET UNITYSDK_OFFSET(0x1C7E58C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_LOOKRAY_OFFSET UNITYSDK_OFFSET(0x1C7E4880)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1C7E5860)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1C7E5820)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C7E5840)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1C7E5880)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_INPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1C7E4930)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_LOOKOFF_OFFSET UNITYSDK_OFFSET(0x1C7E5360)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_LOOKON_OFFSET UNITYSDK_OFFSET(0x1C7E53F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_ONGUI_OFFSET UNITYSDK_OFFSET(0x1C7E5480)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x1C7E5650)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1C7E58E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C7E5900)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1C7E58B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1C7E5870)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1C7E5830)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C7E5850)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1C7E5890)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7E5990)
#define ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E5910)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ClickMeshBrowserUI_TypeDefinitionIndex = 38179;

	class ClickMeshBrowserUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::KeyCode>** StaticGet_keysToCheck()
		{
			return (::Il2CppArray<::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(ClickMeshBrowserUI_TypeDefinitionIndex)->GetStaticField(0x48F90);
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

		static ::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI* Create(::UnityEngine::MeshCollider* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI*(*)(::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_CREATE_OFFSET))(a1);
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

		::System::Void SetCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SETCURSOR_OFFSET))(this, a1);
		}

		::System::Boolean get_MouseHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEHASFOCUS_OFFSET))(this);
		}

		::System::Void set_MouseHasFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEHASFOCUS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_MousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_MousePosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEPOSITION_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::MouseButton get_MouseButtons()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::MouseButton(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSEBUTTONS_OFFSET))(this);
		}

		::System::Void set_MouseButtons(::ZenFulcrum::EmbeddedBrowser::MouseButton a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::MouseButton))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSEBUTTONS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_MouseScroll()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_MOUSESCROLL_OFFSET))(this);
		}

		::System::Void set_MouseScroll(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_MOUSESCROLL_OFFSET))(this, a1);
		}

		::System::Boolean get_KeyboardHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYBOARDHASFOCUS_OFFSET))(this);
		}

		::System::Void set_KeyboardHasFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_KEYBOARDHASFOCUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Event*>* get_KeyEvents()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_KEYEVENTS_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* get_BrowserCursor()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_BROWSERCURSOR_OFFSET))(this);
		}

		::System::Void set_BrowserCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_BROWSERCURSOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* get_InputSettings()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_GET_INPUTSETTINGS_OFFSET))(this);
		}

		::System::Void set_InputSettings(::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CLICKMESHBROWSERUI_SET_INPUTSETTINGS_OFFSET))(this, a1);
		}
	};
}
