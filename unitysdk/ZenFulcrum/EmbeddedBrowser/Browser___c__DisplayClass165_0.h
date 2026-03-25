#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS165_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C542F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS165_0__SETGEOMETRY_B__0_OFFSET UNITYSDK_OFFSET(0x18C666E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass165_0_TypeDefinitionIndex = 30383;

	class Browser___c__DisplayClass165_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::System::Int32 y; // 0x18
		::System::Int32 x; // 0x1C
		::System::Int32 w; // 0x20
		::System::Int32 h; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS165_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetGeometry_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS165_0__SETGEOMETRY_B__0_OFFSET))(this);
		}
	};
}
