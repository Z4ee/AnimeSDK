#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS250_0__CB_NEWWINDOWFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EF80E10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS250_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7D720)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass250_0_TypeDefinitionIndex = 38068;

	class Browser___c__DisplayClass250_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::Int32 newBrowserId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS250_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_NewWindowFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS250_0__CB_NEWWINDOWFUNC_B__0_OFFSET))(this);
		}
	};
}
