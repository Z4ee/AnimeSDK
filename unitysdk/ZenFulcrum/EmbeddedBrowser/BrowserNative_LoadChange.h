#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_LoadChange_TypeDefinitionIndex = 37229;

	enum class BrowserNative_LoadChange : ::System::Int32
	{
		LC_STOP = 1,
		LC_RELOAD = 2,
		LC_FORCE_RELOAD = 3,
	};
}
