#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net::Cache { class RequestCache; }
namespace System::Net::Cache { class RequestCacheValidator; }

#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1AB40D70)
#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_VALIDATOR_OFFSET UNITYSDK_OFFSET(0x1AB40D80)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheBinding_TypeDefinitionIndex = 2982;

	class RequestCacheBinding : public ::System::Object
	{
	public:
		::System::Net::Cache::RequestCacheValidator* m_CacheValidator; // 0x10
		::System::Net::Cache::RequestCache* m_RequestCache; // 0x18

		::System::Net::Cache::RequestCache* get_Cache()
		{
			return ((::System::Net::Cache::RequestCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_CACHE_OFFSET))(this);
		}

		::System::Net::Cache::RequestCacheValidator* get_Validator()
		{
			return ((::System::Net::Cache::RequestCacheValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_VALIDATOR_OFFSET))(this);
		}
	};
}
