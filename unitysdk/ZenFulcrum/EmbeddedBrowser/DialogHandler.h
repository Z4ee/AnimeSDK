#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DialogType.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_DialogCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_MenuCallback; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x18C587C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLECONTEXTMENU_OFFSET UNITYSDK_OFFSET(0x18C68920)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLEDIALOG_OFFSET UNITYSDK_OFFSET(0x18C67FB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HIDE_OFFSET UNITYSDK_OFFSET(0x18C7E3B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_SHOW_OFFSET UNITYSDK_OFFSET(0x18C7E510)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7E570)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_TypeDefinitionIndex = 30535;

	class DialogHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_dialogPage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DialogHandler_TypeDefinitionIndex)->GetStaticField(0x36310);
		}
		::ZenFulcrum::EmbeddedBrowser::Browser* parentBrowser; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* dialogBrowser; // 0x20
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback* dialogCallback; // 0x28
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback* contextCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER__CTOR_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::DialogHandler* Create(::ZenFulcrum::EmbeddedBrowser::Browser* parent, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback* dialogCallback, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback* contextCallback)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::DialogHandler*(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback*, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_CREATE_OFFSET))(parent, dialogCallback, contextCallback);
		}

		::System::Void HandleDialog(::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType type, ::System::String* text, ::System::String* promptDefault)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLEDIALOG_OFFSET))(this, type, text, promptDefault);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HIDE_OFFSET))(this);
		}

		::System::Void HandleContextMenu(::System::String* menuJSON, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLECONTEXTMENU_OFFSET))(this, menuJSON, x, y);
		}
	};
}
