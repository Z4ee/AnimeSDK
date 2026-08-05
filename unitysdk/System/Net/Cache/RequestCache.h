#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections::Specialized { class StringCollection; }
namespace System::IO { class Stream; }
namespace System::Net::Cache { class RequestCacheEntry; }

#define SYSTEM_NET_CACHE_REQUESTCACHE_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1CC15BD0)
#define SYSTEM_NET_CACHE_REQUESTCACHE_GET_ISPRIVATECACHE_OFFSET UNITYSDK_OFFSET(0x1CC15BC0)
#define SYSTEM_NET_CACHE_REQUESTCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC15BE0)
#define SYSTEM_NET_CACHE_REQUESTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC15BB0)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCache_TypeDefinitionIndex = 3860;

	class RequestCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_LineSplits()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(RequestCache_TypeDefinitionIndex)->GetStaticField(0x3340);
		}
		::System::Boolean _CanWrite; // 0x10
		::System::Boolean _IsPrivateCache; // 0x11

		::System::Void _ctor(::System::Boolean isPrivateCache, ::System::Boolean canWrite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE__CTOR_OFFSET))(this, isPrivateCache, canWrite);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsPrivateCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE_GET_ISPRIVATECACHE_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE_GET_CANWRITE_OFFSET))(this);
		}
	};
}
