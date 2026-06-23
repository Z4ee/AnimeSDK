#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Cache/RequestCacheLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D5D19D0)
#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D5D19E0)
#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5D1960)
#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1920)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCachePolicy_TypeDefinitionIndex = 3867;

	class RequestCachePolicy : public ::System::Object
	{
	public:
		::System::Net::Cache::RequestCacheLevel m_Level; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Cache::RequestCacheLevel level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCacheLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY__CTOR_1_OFFSET))(this, level);
		}

		::System::Net::Cache::RequestCacheLevel get_Level()
		{
			return ((::System::Net::Cache::RequestCacheLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_GET_LEVEL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_TOSTRING_OFFSET))(this);
		}
	};
}
