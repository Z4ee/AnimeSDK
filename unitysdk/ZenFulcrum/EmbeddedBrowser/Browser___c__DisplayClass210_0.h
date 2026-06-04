#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS210_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E06E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS210_0__SET_ZOOM_B__0_OFFSET UNITYSDK_OFFSET(0x1B4E5B40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass210_0_TypeDefinitionIndex = 36411;

	class Browser___c__DisplayClass210_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::System::Single value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS210_0__CTOR_OFFSET))(this);
		}

		::System::Void _set_Zoom_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS210_0__SET_ZOOM_B__0_OFFSET))(this);
		}
	};
}
