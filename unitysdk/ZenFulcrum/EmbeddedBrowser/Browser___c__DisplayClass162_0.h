#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ReadyFunc; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB38E70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_0__WHENREADY_B__0_OFFSET UNITYSDK_OFFSET(0x1AB43D00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass162_0_TypeDefinitionIndex = 37184;

	class Browser___c__DisplayClass162_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc* func; // 0x10
		::System::Action* callback; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_0__CTOR_OFFSET))(this);
		}

		::System::Void _WhenReady_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_0__WHENREADY_B__0_OFFSET))(this, a1);
		}
	};
}
