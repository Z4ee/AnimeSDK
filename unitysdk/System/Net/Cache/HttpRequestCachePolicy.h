#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/Cache/HttpCacheAgeControl.h"
#include "unitysdk/System/Net/Cache/HttpRequestCacheLevel.h"
#include "unitysdk/System/Net/Cache/RequestCacheLevel.h"
#include "unitysdk/System/Net/Cache/RequestCachePolicy.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_CACHESYNCDATE_OFFSET UNITYSDK_OFFSET(0x1A241F10)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_INTERNALCACHESYNCDATEUTC_OFFSET UNITYSDK_OFFSET(0x1A241F50)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A241F00)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x1A241F60)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_MAXSTALE_OFFSET UNITYSDK_OFFSET(0x1A241F80)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_MINFRESH_OFFSET UNITYSDK_OFFSET(0x1A241F70)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_MAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1A2419A0)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A241F90)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2423B0)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A241850)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A241A20)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A241C00)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A241DF0)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A241ED0)
#define SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A241780)

namespace System::Net::Cache
{
	inline static constexpr unsigned int HttpRequestCachePolicy_TypeDefinitionIndex = 3871;

	class HttpRequestCachePolicy : public ::System::Net::Cache::RequestCachePolicy
	{
	public:
		static ::System::Net::Cache::HttpRequestCachePolicy** StaticGet_BypassCache()
		{
			return (::System::Net::Cache::HttpRequestCachePolicy**)Il2CppClass::FromTypeDefinitionIndex(HttpRequestCachePolicy_TypeDefinitionIndex)->GetStaticField(0x34D0);
		}
		::System::Net::Cache::HttpRequestCacheLevel m_Level; // 0x18
		::System::TimeSpan m_MaxAge; // 0x20
		::System::TimeSpan m_MaxStale; // 0x28
		::System::TimeSpan m_MinFresh; // 0x30
		::System::DateTime m_LastSyncDateUtc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Cache::HttpRequestCacheLevel level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::HttpRequestCacheLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_1_OFFSET))(this, level);
		}

		::System::Void _ctor_2(::System::Net::Cache::HttpCacheAgeControl cacheAgeControl, ::System::TimeSpan ageOrFreshOrStale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::HttpCacheAgeControl, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_2_OFFSET))(this, cacheAgeControl, ageOrFreshOrStale);
		}

		::System::Void _ctor_3(::System::Net::Cache::HttpCacheAgeControl cacheAgeControl, ::System::TimeSpan maxAge, ::System::TimeSpan freshOrStale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::HttpCacheAgeControl, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_3_OFFSET))(this, cacheAgeControl, maxAge, freshOrStale);
		}

		::System::Void _ctor_4(::System::DateTime cacheSyncDate)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_4_OFFSET))(this, cacheSyncDate);
		}

		::System::Void _ctor_5(::System::Net::Cache::HttpCacheAgeControl cacheAgeControl, ::System::TimeSpan maxAge, ::System::TimeSpan freshOrStale, ::System::DateTime cacheSyncDate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::HttpCacheAgeControl, ::System::TimeSpan, ::System::TimeSpan, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CTOR_5_OFFSET))(this, cacheAgeControl, maxAge, freshOrStale, cacheSyncDate);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY__CCTOR_OFFSET))();
		}

		::System::Net::Cache::HttpRequestCacheLevel get_Level()
		{
			return ((::System::Net::Cache::HttpRequestCacheLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_LEVEL_OFFSET))(this);
		}

		::System::DateTime get_CacheSyncDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_CACHESYNCDATE_OFFSET))(this);
		}

		::System::DateTime get_InternalCacheSyncDateUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_INTERNALCACHESYNCDATEUTC_OFFSET))(this);
		}

		::System::TimeSpan get_MaxAge()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_MAXAGE_OFFSET))(this);
		}

		::System::TimeSpan get_MinFresh()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_MINFRESH_OFFSET))(this);
		}

		::System::TimeSpan get_MaxStale()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_GET_MAXSTALE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_TOSTRING_OFFSET))(this);
		}

		static ::System::Net::Cache::RequestCacheLevel MapLevel(::System::Net::Cache::HttpRequestCacheLevel level)
		{
			return ((::System::Net::Cache::RequestCacheLevel(*)(::System::Net::Cache::HttpRequestCacheLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_HTTPREQUESTCACHEPOLICY_MAPLEVEL_OFFSET))(level);
		}
	};
}
