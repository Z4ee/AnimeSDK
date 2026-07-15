#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DialogType.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_DialogCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class DialogHandler_MenuCallback; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1AB3B9D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLECONTEXTMENU_OFFSET UNITYSDK_OFFSET(0x1AB453C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLEDIALOG_OFFSET UNITYSDK_OFFSET(0x1AB44BB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HIDE_OFFSET UNITYSDK_OFFSET(0x1AB555F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_SHOW_OFFSET UNITYSDK_OFFSET(0x1AB55750)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB557B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_TypeDefinitionIndex = 37337;

	class DialogHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_dialogPage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DialogHandler_TypeDefinitionIndex)->GetStaticField(0x65110);
		}
		::ZenFulcrum::EmbeddedBrowser::Browser* parentBrowser; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* dialogBrowser; // 0x20
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback* dialogCallback; // 0x28
		::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback* contextCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER__CTOR_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::DialogHandler* Create(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback* a2, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback* a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::DialogHandler*(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback*, ::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void HandleDialog(::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLEDIALOG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HIDE_OFFSET))(this);
		}

		::System::Void HandleContextMenu(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_HANDLECONTEXTMENU_OFFSET))(this, a1, a2, a3);
		}
	};
}
