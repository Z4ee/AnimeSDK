#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheLevel_TypeDefinitionIndex = 2976;

	enum class RequestCacheLevel : ::System::Int32
	{
		Default = 0,
		BypassCache = 1,
		CacheOnly = 2,
		CacheIfAvailable = 3,
		Revalidate = 4,
		Reload = 5,
		NoCacheNoStore = 6,
	};
}
