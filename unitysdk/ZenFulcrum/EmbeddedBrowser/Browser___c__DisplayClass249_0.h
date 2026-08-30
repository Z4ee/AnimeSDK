#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS249_0__CB_REPORTFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EF80DC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS249_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7D710)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass249_0_TypeDefinitionIndex = 38067;

	class Browser___c__DisplayClass249_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::Int32 browserId; // 0x18
		::System::Int32 eventId; // 0x1C
		::System::Int64 param1; // 0x20
		::System::Int64 param2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS249_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_ReportFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS249_0__CB_REPORTFUNC_B__0_OFFSET))(this);
		}
	};
}
