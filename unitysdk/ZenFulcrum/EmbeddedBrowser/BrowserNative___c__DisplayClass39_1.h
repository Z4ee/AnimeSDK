#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ZFBInitialSettings.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7DF8E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_1__INITWEBVIEWASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x1C7DF8F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c__DisplayClass39_1_TypeDefinitionIndex = 38168;

	class BrowserNative___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBInitialSettings settings; // 0x10
		::System::Boolean initRes; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitWebViewAsync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_1__INITWEBVIEWASYNC_B__2_OFFSET))(this);
		}
	};
}
