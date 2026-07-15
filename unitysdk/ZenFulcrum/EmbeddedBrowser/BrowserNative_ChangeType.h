#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ChangeType_TypeDefinitionIndex = 37231;

	enum class BrowserNative_ChangeType : ::System::Int32
	{
		CHT_CURSOR = 0,
		CHT_BROWSER_CLOSE = 1,
		CHT_FETCH_FINISHED = 2,
		CHT_FETCH_FAILED = 3,
		CHT_LOAD_STARTS = 4,
		CHT_LOAD_FINISHED = 5,
		CHT_CERT_ERROR = 6,
		CHT_SAD_TAB = 7,
		CHT_DOWNLOAD_STARTED = 8,
		CHT_DOWNLOAD_STATUS = 9,
		CHT_FOCUSED_NODE = 10,
		CHT_GET_UNIWEBVIEW_MSG = 11,
		CHT_BEFORE_NAVIGATION = 12,
	};
}
