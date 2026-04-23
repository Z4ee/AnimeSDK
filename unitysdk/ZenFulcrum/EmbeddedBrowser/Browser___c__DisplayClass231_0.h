#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS231_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69D870)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS231_0__SETOVERLAY_B__0_OFFSET UNITYSDK_OFFSET(0x1A6A2940)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS231_0__SETOVERLAY_B__1_OFFSET UNITYSDK_OFFSET(0x1A6A2970)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass231_0_TypeDefinitionIndex = 36118;

	class Browser___c__DisplayClass231_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* overlayBrowser; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS231_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetOverlay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS231_0__SETOVERLAY_B__0_OFFSET))(this);
		}

		::System::Void _SetOverlay_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS231_0__SETOVERLAY_B__1_OFFSET))(this);
		}
	};
}
