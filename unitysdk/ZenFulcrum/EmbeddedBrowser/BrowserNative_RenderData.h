#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_RenderData_TypeDefinitionIndex = 37241;

	struct alignas(1) BrowserNative_RenderData
	{
		::System::IntPtr pixels; // 0x10
		::System::Int32 w; // 0x18
		::System::Int32 h; // 0x1C
	};
}
