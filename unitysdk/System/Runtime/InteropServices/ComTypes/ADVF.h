#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int ADVF_TypeDefinitionIndex = 3125;

	enum class ADVF : ::System::Int32
	{
		ADVF_NODATA = 1,
		ADVF_PRIMEFIRST = 2,
		ADVF_ONLYONCE = 4,
		ADVFCACHE_NOHANDLER = 8,
		ADVFCACHE_FORCEBUILTIN = 16,
		ADVFCACHE_ONSAVE = 32,
		ADVF_DATAONSTOP = 64,
	};
}
