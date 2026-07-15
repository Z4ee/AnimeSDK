#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_MouseButton_TypeDefinitionIndex = 37230;

	enum class BrowserNative_MouseButton : ::System::Int32
	{
		MBT_LEFT = 0,
		MBT_MIDDLE = 1,
		MBT_RIGHT = 2,
	};
}
