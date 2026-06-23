#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Cache
{
	inline static constexpr unsigned int HttpCacheAgeControl_TypeDefinitionIndex = 3869;

	enum class HttpCacheAgeControl : ::System::Int32
	{
		None = 0,
		MinFresh = 1,
		MaxAge = 2,
		MaxStale = 4,
		MaxAgeAndMinFresh = 3,
		MaxAgeAndMaxStale = 6,
	};
}
