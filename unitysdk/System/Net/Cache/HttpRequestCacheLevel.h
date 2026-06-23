#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Cache
{
	inline static constexpr unsigned int HttpRequestCacheLevel_TypeDefinitionIndex = 3868;

	enum class HttpRequestCacheLevel : ::System::Int32
	{
		Default = 0,
		BypassCache = 1,
		CacheOnly = 2,
		CacheIfAvailable = 3,
		Revalidate = 4,
		Reload = 5,
		NoCacheNoStore = 6,
		CacheOrNextCacheOnly = 7,
		Refresh = 8,
	};
}
