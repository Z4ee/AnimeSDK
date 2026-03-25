#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }
namespace ZenFulcrum::EmbeddedBrowser { class PointerUIBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ADD_ONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x18C81320)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C81420)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_COMMANDENTERED_OFFSET UNITYSDK_OFFSET(0x18C81B50)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_DOFOCUS_OFFSET UNITYSDK_OFFSET(0x18C81270)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_FINDANDLISTENFORBROWSERS_OFFSET UNITYSDK_OFFSET(0x18C81730)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_GET_ACTIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x18C81080)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_OBSERVEBROWSER_OFFSET UNITYSDK_OFFSET(0x18C81790)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ONBROWSERFOCUS_OFFSET UNITYSDK_OFFSET(0x18C81AD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_REMOVE_ONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x18C813A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x18C819B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SET_ACTIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x18C81090)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_TEXTTYPED_OFFSET UNITYSDK_OFFSET(0x18C825A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18C826C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__SETACTIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x18C810B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard_TypeDefinitionIndex = 30543;

	class ExternalKeyboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean automaticFocus; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* initialBrowser; // 0x20
		::System::Boolean hideWhenUnneeded; // 0x28
		::ZenFulcrum::EmbeddedBrowser::PointerUIBase* activeBrowserUI; // 0x30
		::ZenFulcrum::EmbeddedBrowser::Browser* keyboardBrowser; // 0x38
		::System::Boolean forcingFocus; // 0x40
		::ZenFulcrum::EmbeddedBrowser::Browser* _activeBrowser; // 0x48
		::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>* onFocusChange; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__CTOR_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::Browser* get_ActiveBrowser()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::Browser*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_GET_ACTIVEBROWSER_OFFSET))(this);
		}

		::System::Void set_ActiveBrowser(::ZenFulcrum::EmbeddedBrowser::Browser* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SET_ACTIVEBROWSER_OFFSET))(this, value);
		}

		::System::Void _SetActiveBrowser(::ZenFulcrum::EmbeddedBrowser::Browser* browser)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__SETACTIVEBROWSER_OFFSET))(this, browser);
		}

		::System::Void add_onFocusChange(::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ADD_ONFOCUSCHANGE_OFFSET))(this, value);
		}

		::System::Void remove_onFocusChange(::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_REMOVE_ONFOCUSCHANGE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_AWAKE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FindAndListenForBrowsers()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_FINDANDLISTENFORBROWSERS_OFFSET))(this);
		}

		::System::Void ObserveBrowser(::ZenFulcrum::EmbeddedBrowser::Browser* browser)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_OBSERVEBROWSER_OFFSET))(this, browser);
		}

		::System::Void DoFocus(::ZenFulcrum::EmbeddedBrowser::Browser* browser)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_DOFOCUS_OFFSET))(this, browser);
		}

		::System::Void SetVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SETVISIBLE_OFFSET))(this, visible);
		}

		::System::Void OnBrowserFocus(::System::Boolean mouseFocused, ::System::Boolean kbFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ONBROWSERFOCUS_OFFSET))(this, mouseFocused, kbFocused);
		}

		::System::Void CommandEntered(::ZenFulcrum::EmbeddedBrowser::JSONNode* args)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_COMMANDENTERED_OFFSET))(this, args);
		}

		::System::Void TextTyped(::ZenFulcrum::EmbeddedBrowser::JSONNode* args)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_TEXTTYPED_OFFSET))(this, args);
		}
	};
}
