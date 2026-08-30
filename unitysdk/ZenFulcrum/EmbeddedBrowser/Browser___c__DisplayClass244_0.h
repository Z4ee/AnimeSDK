#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DialogType.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS244_0__CB_DISPLAYDIALOGFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C7D7C90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS244_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D5200)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass244_0_TypeDefinitionIndex = 38062;

	class Browser___c__DisplayClass244_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::String* text; // 0x18
		::System::String* promptText; // 0x20
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType dialogType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS244_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_DisplayDialogFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS244_0__CB_DISPLAYDIALOGFUNC_B__0_OFFSET))(this);
		}
	};
}
