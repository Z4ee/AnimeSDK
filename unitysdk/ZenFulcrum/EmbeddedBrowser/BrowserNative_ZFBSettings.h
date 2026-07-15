#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ZFBSettings_TypeDefinitionIndex = 37240;

	struct alignas(8) BrowserNative_ZFBSettings
	{
		::System::Int32 bgR; // 0x10
		::System::Int32 bgG; // 0x14
		::System::Int32 bgB; // 0x18
		::System::Int32 bgA; // 0x1C
		::System::Int32 offscreen; // 0x20
		::System::Int32 hostProcessId; // 0x24
		::System::Int32 reportEvents; // 0x28
		::System::Int32 hostHWnd; // 0x2C
		::System::String* acceptLanguage; // 0x30
	};
}
