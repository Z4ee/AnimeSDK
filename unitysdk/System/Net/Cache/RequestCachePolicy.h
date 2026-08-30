#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Cache/RequestCacheLevel.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E957520)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCachePolicy_TypeDefinitionIndex = 2984;

	class RequestCachePolicy : public ::System::Object
	{
	public:
		::System::Net::Cache::RequestCacheLevel m_Level; // 0x10

		::System::Net::Cache::RequestCacheLevel get_Level()
		{
			return ((::System::Net::Cache::RequestCacheLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_GET_LEVEL_OFFSET))(this);
		}
	};
}
