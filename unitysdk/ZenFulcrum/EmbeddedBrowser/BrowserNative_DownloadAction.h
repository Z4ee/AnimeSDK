#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_DownloadAction_TypeDefinitionIndex = 37232;

	enum class BrowserNative_DownloadAction : ::System::Int32
	{
		Begin = 0,
		Cancel = 1,
		Pause = 2,
		Resume = 3,
	};
}
