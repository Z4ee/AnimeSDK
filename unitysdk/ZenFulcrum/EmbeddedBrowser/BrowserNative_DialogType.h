#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_DialogType_TypeDefinitionIndex = 37234;

	enum class BrowserNative_DialogType : ::System::Int32
	{
		DLT_HIDE = 0,
		DLT_ALERT = 1,
		DLT_CONFIRM = 2,
		DLT_PROMPT = 3,
		DLT_PAGE_UNLOAD = 4,
		DLT_PAGE_RELOAD = 5,
		DLT_GET_AUTH = 6,
	};
}
