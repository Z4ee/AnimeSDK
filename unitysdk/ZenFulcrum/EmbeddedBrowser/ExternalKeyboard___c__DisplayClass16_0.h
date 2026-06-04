#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class ExternalKeyboard; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F8BB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__DISPLAYCLASS16_0__OBSERVEBROWSER_B__0_OFFSET UNITYSDK_OFFSET(0x1B4F9930)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__DISPLAYCLASS16_0__OBSERVEBROWSER_B__1_OFFSET UNITYSDK_OFFSET(0x1B4F9980)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard___c__DisplayClass16_0_TypeDefinitionIndex = 36565;

	class ExternalKeyboard___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _ObserveBrowser_b__0(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__DISPLAYCLASS16_0__OBSERVEBROWSER_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ObserveBrowser_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__DISPLAYCLASS16_0__OBSERVEBROWSER_B__1_OFFSET))(this);
		}
	};
}
