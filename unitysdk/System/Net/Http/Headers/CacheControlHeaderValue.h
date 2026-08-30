#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D6B60)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D6D90)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1E7D6370)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x1E7D63B0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALELIMIT_OFFSET UNITYSDK_OFFSET(0x1E7D63F0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALE_OFFSET UNITYSDK_OFFSET(0x1E7D63D0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MINFRESH_OFFSET UNITYSDK_OFFSET(0x1E7D6410)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MUSTREVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E7D6430)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHEHEADERS_OFFSET UNITYSDK_OFFSET(0x1E7D6470)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHE_OFFSET UNITYSDK_OFFSET(0x1E7D6450)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOSTORE_OFFSET UNITYSDK_OFFSET(0x1E7D64B0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E7D64D0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_ONLYIFCACHED_OFFSET UNITYSDK_OFFSET(0x1E7D64F0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATEHEADERS_OFFSET UNITYSDK_OFFSET(0x1E7D6530)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATE_OFFSET UNITYSDK_OFFSET(0x1E7D6510)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PROXYREVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E7D6570)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x1E7D6590)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_SHAREDMAXAGE_OFFSET UNITYSDK_OFFSET(0x1E7D65B0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x1E7D63C0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALELIMIT_OFFSET UNITYSDK_OFFSET(0x1E7D6400)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALE_OFFSET UNITYSDK_OFFSET(0x1E7D63E0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MINFRESH_OFFSET UNITYSDK_OFFSET(0x1E7D6420)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MUSTREVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E7D6440)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOCACHE_OFFSET UNITYSDK_OFFSET(0x1E7D6460)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOSTORE_OFFSET UNITYSDK_OFFSET(0x1E7D64C0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E7D64E0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_ONLYIFCACHED_OFFSET UNITYSDK_OFFSET(0x1E7D6500)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PRIVATE_OFFSET UNITYSDK_OFFSET(0x1E7D6520)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PROXYREVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E7D6580)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x1E7D65A0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_SHAREDMAXAGE_OFFSET UNITYSDK_OFFSET(0x1E7D65C0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D65D0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D7EB0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E7D6F80)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7D90)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CacheControlHeaderValue_TypeDefinitionIndex = 3777;

	class CacheControlHeaderValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* no_cache_headers; // 0x10
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* extensions; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* private_headers; // 0x20
		::System::Boolean _NoTransform_k__BackingField; // 0x28
		::System::Boolean _Public_k__BackingField; // 0x29
		::System::Nullable_1<::System::TimeSpan> _MinFresh_k__BackingField; // 0x30
		::System::Nullable_1<::System::TimeSpan> _MaxAge_k__BackingField; // 0x40
		::System::Nullable_1<::System::TimeSpan> _SharedMaxAge_k__BackingField; // 0x50
		::System::Boolean _MaxStale_k__BackingField; // 0x60
		::System::Boolean _Private_k__BackingField; // 0x61
		::System::Boolean _NoStore_k__BackingField; // 0x62
		::System::Boolean _OnlyIfCached_k__BackingField; // 0x63
		::System::Boolean _NoCache_k__BackingField; // 0x64
		::System::Boolean _ProxyRevalidate_k__BackingField; // 0x65
		::System::Boolean _MustRevalidate_k__BackingField; // 0x66
		::System::Nullable_1<::System::TimeSpan> _MaxStaleLimit_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Extensions()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_EXTENSIONS_OFFSET))(this);
		}

		::System::Nullable_1<::System::TimeSpan> get_MaxAge()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXAGE_OFFSET))(this);
		}

		::System::Void set_MaxAge(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_MaxStale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALE_OFFSET))(this);
		}

		::System::Void set_MaxStale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::TimeSpan> get_MaxStaleLimit()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALELIMIT_OFFSET))(this);
		}

		::System::Void set_MaxStaleLimit(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALELIMIT_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::TimeSpan> get_MinFresh()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MINFRESH_OFFSET))(this);
		}

		::System::Void set_MinFresh(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MINFRESH_OFFSET))(this, a1);
		}

		::System::Boolean get_MustRevalidate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MUSTREVALIDATE_OFFSET))(this);
		}

		::System::Void set_MustRevalidate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MUSTREVALIDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_NoCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHE_OFFSET))(this);
		}

		::System::Void set_NoCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOCACHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_NoCacheHeaders()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHEHEADERS_OFFSET))(this);
		}

		::System::Boolean get_NoStore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOSTORE_OFFSET))(this);
		}

		::System::Void set_NoStore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOSTORE_OFFSET))(this, a1);
		}

		::System::Boolean get_NoTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOTRANSFORM_OFFSET))(this);
		}

		::System::Void set_NoTransform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOTRANSFORM_OFFSET))(this, a1);
		}

		::System::Boolean get_OnlyIfCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_ONLYIFCACHED_OFFSET))(this);
		}

		::System::Void set_OnlyIfCached(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_ONLYIFCACHED_OFFSET))(this, a1);
		}

		::System::Boolean get_Private()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATE_OFFSET))(this);
		}

		::System::Void set_Private(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PRIVATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_PrivateHeaders()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATEHEADERS_OFFSET))(this);
		}

		::System::Boolean get_ProxyRevalidate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PROXYREVALIDATE_OFFSET))(this);
		}

		::System::Void set_ProxyRevalidate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PROXYREVALIDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_Public()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PUBLIC_OFFSET))(this);
		}

		::System::Void set_Public(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PUBLIC_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::TimeSpan> get_SharedMaxAge()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_SHAREDMAXAGE_OFFSET))(this);
		}

		::System::Void set_SharedMaxAge(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_SHAREDMAXAGE_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::Http::Headers::CacheControlHeaderValue*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::CacheControlHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TRYPARSE_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
