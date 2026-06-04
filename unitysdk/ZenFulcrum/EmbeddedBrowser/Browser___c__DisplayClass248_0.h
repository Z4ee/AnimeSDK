#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS248_0__CB_NAVSTATEFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B4E7220)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS248_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E3C00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass248_0_TypeDefinitionIndex = 36425;

	class Browser___c__DisplayClass248_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x18
		::System::Boolean lodaing; // 0x20
		::System::Boolean canGoBack; // 0x21
		::System::Boolean canGoForward; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS248_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_NavStateFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS248_0__CB_NAVSTATEFUNC_B__0_OFFSET))(this);
		}
	};
}
