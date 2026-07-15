#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS177_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB3CA80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS177_0__LOADHTML_B__0_OFFSET UNITYSDK_OFFSET(0x1AB43EF0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass177_0_TypeDefinitionIndex = 37187;

	class Browser___c__DisplayClass177_0 : public ::System::Object
	{
	public:
		::System::String* html; // 0x10
		::System::String* url; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS177_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadHTML_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS177_0__LOADHTML_B__0_OFFSET))(this);
		}
	};
}
