#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net::Cache { class RequestCache; }
namespace System::Net::Cache { class RequestCachePolicy; }
namespace System::Net::Cache { class RequestCacheValidator; }

#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1D5D18F0)
#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_POLICY_OFFSET UNITYSDK_OFFSET(0x1D5D1910)
#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_VALIDATOR_OFFSET UNITYSDK_OFFSET(0x1D5D1900)
#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D18E0)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheBinding_TypeDefinitionIndex = 3865;

	class RequestCacheBinding : public ::System::Object
	{
	public:
		::System::Net::Cache::RequestCache* m_RequestCache; // 0x10
		::System::Net::Cache::RequestCachePolicy* m_Policy; // 0x18
		::System::Net::Cache::RequestCacheValidator* m_CacheValidator; // 0x20

		::System::Void _ctor(::System::Net::Cache::RequestCache* requestCache, ::System::Net::Cache::RequestCacheValidator* cacheValidator, ::System::Net::Cache::RequestCachePolicy* policy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCache*, ::System::Net::Cache::RequestCacheValidator*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING__CTOR_OFFSET))(this, requestCache, cacheValidator, policy);
		}

		::System::Net::Cache::RequestCache* get_Cache()
		{
			return ((::System::Net::Cache::RequestCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_CACHE_OFFSET))(this);
		}

		::System::Net::Cache::RequestCacheValidator* get_Validator()
		{
			return ((::System::Net::Cache::RequestCacheValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_VALIDATOR_OFFSET))(this);
		}

		::System::Net::Cache::RequestCachePolicy* get_Policy()
		{
			return ((::System::Net::Cache::RequestCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_POLICY_OFFSET))(this);
		}
	};
}
