#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ChangeType.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS243_0__CB_CHANGEFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x18C67E50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS243_0__CB_CHANGEFUNC_B__1_OFFSET UNITYSDK_OFFSET(0x18C67E80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS243_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C64360)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass243_0_TypeDefinitionIndex = 30400;

	class Browser___c__DisplayClass243_0 : public ::System::Object
	{
	public:
		::System::String* arg1; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x18
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType changeType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS243_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_ChangeFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS243_0__CB_CHANGEFUNC_B__0_OFFSET))(this);
		}

		::System::Void _CB_ChangeFunc_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS243_0__CB_CHANGEFUNC_B__1_OFFSET))(this);
		}
	};
}
