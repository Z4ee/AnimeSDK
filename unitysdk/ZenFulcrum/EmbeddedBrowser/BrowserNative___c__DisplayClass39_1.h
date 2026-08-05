#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ZFBInitialSettings.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8730B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c__DisplayClass39_1_TypeDefinitionIndex = 33279;

	class BrowserNative___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBInitialSettings settings; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}
	};
}
