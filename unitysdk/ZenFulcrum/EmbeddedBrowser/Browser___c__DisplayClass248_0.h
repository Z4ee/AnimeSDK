#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS248_0__CB_NAVSTATEFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1F86FF40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS248_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F86FF30)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass248_0_TypeDefinitionIndex = 33179;

	class Browser___c__DisplayClass248_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::String* url; // 0x18
		::System::Boolean lodaing; // 0x20
		::System::Boolean canGoForward; // 0x21
		::System::Boolean canGoBack; // 0x22

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
