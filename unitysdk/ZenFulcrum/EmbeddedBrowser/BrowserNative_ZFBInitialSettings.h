#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ZFBInitialSettings_TypeDefinitionIndex = 37239;

	struct alignas(8) BrowserNative_ZFBInitialSettings
	{
		::System::String* cefPath; // 0x10
		::System::String* localePath; // 0x18
		::System::String* subprocessFile; // 0x20
		::System::String* userAgent; // 0x28
		::System::String* logFile; // 0x30
		::System::String* profilePath; // 0x38
		::System::String* acceptLanguage; // 0x40
		::System::Int32 debugPort; // 0x48
		::System::Int32 multiThreadedMessageLoop; // 0x4C
		::System::Int32 hostProcessId; // 0x50
		::System::Int32 reportSettings; // 0x54
	};
}
