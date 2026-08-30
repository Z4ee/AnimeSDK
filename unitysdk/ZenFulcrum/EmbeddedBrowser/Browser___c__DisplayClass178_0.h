#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/Browser_NewWindowAction.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class INewWindowHandler; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS178_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF78030)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS178_0__SETNEWWINDOWHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1EF7F500)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass178_0_TypeDefinitionIndex = 38047;

	class Browser___c__DisplayClass178_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::ZenFulcrum::EmbeddedBrowser::INewWindowHandler* newWindowHandler; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser_NewWindowAction action; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS178_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetNewWindowHandler_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS178_0__SETNEWWINDOWHANDLER_B__0_OFFSET))(this);
		}
	};
}
