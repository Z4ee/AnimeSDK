#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS253_0__CB_NEWWINDOWFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1F61ADA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS253_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F617710)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass253_0_TypeDefinitionIndex = 39365;

	class Browser___c__DisplayClass253_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::Int32 newBrowserId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS253_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_NewWindowFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS253_0__CB_NEWWINDOWFUNC_B__0_OFFSET))(this);
		}
	};
}
