#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_FrameCommand.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS179_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5AC40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS179_0__SENDFRAMECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x18C667F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass179_0_TypeDefinitionIndex = 30387;

	class Browser___c__DisplayClass179_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_FrameCommand command; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS179_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendFrameCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS179_0__SENDFRAMECOMMAND_B__0_OFFSET))(this);
		}
	};
}
