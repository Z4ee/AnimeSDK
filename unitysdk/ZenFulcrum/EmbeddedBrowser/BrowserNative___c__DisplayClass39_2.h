#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative___c__DisplayClass39_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8730C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_2__INITWEBVIEWASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x1F8730D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c__DisplayClass39_2_TypeDefinitionIndex = 33280;

	class BrowserNative___c__DisplayClass39_2 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserNative___c__DisplayClass39_1* CS___8__locals1; // 0x10
		::System::Boolean initRes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_2__CTOR_OFFSET))(this);
		}

		::System::Void _InitWebViewAsync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_2__INITWEBVIEWASYNC_B__2_OFFSET))(this);
		}
	};
}
