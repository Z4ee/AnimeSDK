#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }
namespace ZenFulcrum::EmbeddedBrowser { class PointerUIBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ADD_ONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C7EB1E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C7EB2E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_COMMANDENTERED_OFFSET UNITYSDK_OFFSET(0x1C7EBA90)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_DOFOCUS_OFFSET UNITYSDK_OFFSET(0x1C7EB0C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_FINDANDLISTENFORBROWSERS_OFFSET UNITYSDK_OFFSET(0x1C7EB690)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_GET_ACTIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x1C7EAE10)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_OBSERVEBROWSER_OFFSET UNITYSDK_OFFSET(0x1C7EB6F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ONBROWSERFOCUS_OFFSET UNITYSDK_OFFSET(0x1C7EBA40)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_REMOVE_ONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C7EB260)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C7EB930)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SET_ACTIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x1C7EAE20)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_TEXTTYPED_OFFSET UNITYSDK_OFFSET(0x1C7EC4E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EC690)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__SETACTIVEBROWSER_OFFSET UNITYSDK_OFFSET(0x1C7EAE40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard_TypeDefinitionIndex = 38204;

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

		::System::Void set_ActiveBrowser(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SET_ACTIVEBROWSER_OFFSET))(this, a1);
		}

		::System::Void _SetActiveBrowser(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__SETACTIVEBROWSER_OFFSET))(this, a1);
		}

		::System::Void add_onFocusChange(::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ADD_ONFOCUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_onFocusChange(::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_REMOVE_ONFOCUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_AWAKE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FindAndListenForBrowsers()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_FINDANDLISTENFORBROWSERS_OFFSET))(this);
		}

		::System::Void ObserveBrowser(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_OBSERVEBROWSER_OFFSET))(this, a1);
		}

		::System::Void DoFocus(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_DOFOCUS_OFFSET))(this, a1);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void OnBrowserFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_ONBROWSERFOCUS_OFFSET))(this, a1, a2);
		}

		::System::Void CommandEntered(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_COMMANDENTERED_OFFSET))(this, a1);
		}

		::System::Void TextTyped(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_TEXTTYPED_OFFSET))(this, a1);
		}
	};
}
