#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F5BD70)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F5BF90)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x19F5B640)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x19F5B680)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALELIMIT_OFFSET UNITYSDK_OFFSET(0x19F5B6C0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALE_OFFSET UNITYSDK_OFFSET(0x19F5B6A0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MINFRESH_OFFSET UNITYSDK_OFFSET(0x19F5B6E0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MUSTREVALIDATE_OFFSET UNITYSDK_OFFSET(0x19F5B700)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHEHEADERS_OFFSET UNITYSDK_OFFSET(0x19F5B740)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHE_OFFSET UNITYSDK_OFFSET(0x19F5B720)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOSTORE_OFFSET UNITYSDK_OFFSET(0x19F5B780)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19F5B7A0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_ONLYIFCACHED_OFFSET UNITYSDK_OFFSET(0x19F5B7C0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATEHEADERS_OFFSET UNITYSDK_OFFSET(0x19F5B800)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATE_OFFSET UNITYSDK_OFFSET(0x19F5B7E0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PROXYREVALIDATE_OFFSET UNITYSDK_OFFSET(0x19F5B840)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x19F5B860)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_SHAREDMAXAGE_OFFSET UNITYSDK_OFFSET(0x19F5B880)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x19F5B690)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALELIMIT_OFFSET UNITYSDK_OFFSET(0x19F5B6D0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALE_OFFSET UNITYSDK_OFFSET(0x19F5B6B0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MINFRESH_OFFSET UNITYSDK_OFFSET(0x19F5B6F0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MUSTREVALIDATE_OFFSET UNITYSDK_OFFSET(0x19F5B710)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOCACHE_OFFSET UNITYSDK_OFFSET(0x19F5B730)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOSTORE_OFFSET UNITYSDK_OFFSET(0x19F5B790)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19F5B7B0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_ONLYIFCACHED_OFFSET UNITYSDK_OFFSET(0x19F5B7D0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PRIVATE_OFFSET UNITYSDK_OFFSET(0x19F5B7F0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PROXYREVALIDATE_OFFSET UNITYSDK_OFFSET(0x19F5B850)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x19F5B870)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_SHAREDMAXAGE_OFFSET UNITYSDK_OFFSET(0x19F5B890)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x19F5B8A0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F5D020)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x19F5C180)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5CF00)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CacheControlHeaderValue_TypeDefinitionIndex = 4798;

	class CacheControlHeaderValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* no_cache_headers; // 0x10
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* extensions; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* private_headers; // 0x20
		::System::Nullable_1<::System::TimeSpan> _MinFresh_k__BackingField; // 0x28
		::System::Boolean _NoTransform_k__BackingField; // 0x38
		::System::Boolean _MustRevalidate_k__BackingField; // 0x39
		::System::Boolean _NoStore_k__BackingField; // 0x3A
		::System::Boolean _MaxStale_k__BackingField; // 0x3B
		::System::Boolean _Public_k__BackingField; // 0x3C
		::System::Boolean _NoCache_k__BackingField; // 0x3D
		::System::Boolean _Private_k__BackingField; // 0x3E
		::System::Boolean _OnlyIfCached_k__BackingField; // 0x3F
		::System::Boolean _ProxyRevalidate_k__BackingField; // 0x40
		::System::Nullable_1<::System::TimeSpan> _SharedMaxAge_k__BackingField; // 0x48
		::System::Nullable_1<::System::TimeSpan> _MaxStaleLimit_k__BackingField; // 0x58
		::System::Nullable_1<::System::TimeSpan> _MaxAge_k__BackingField; // 0x68

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

		::System::Void set_MaxAge(::System::Nullable_1<::System::TimeSpan> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXAGE_OFFSET))(this, value);
		}

		::System::Boolean get_MaxStale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALE_OFFSET))(this);
		}

		::System::Void set_MaxStale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::TimeSpan> get_MaxStaleLimit()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MAXSTALELIMIT_OFFSET))(this);
		}

		::System::Void set_MaxStaleLimit(::System::Nullable_1<::System::TimeSpan> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MAXSTALELIMIT_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::TimeSpan> get_MinFresh()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MINFRESH_OFFSET))(this);
		}

		::System::Void set_MinFresh(::System::Nullable_1<::System::TimeSpan> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MINFRESH_OFFSET))(this, value);
		}

		::System::Boolean get_MustRevalidate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_MUSTREVALIDATE_OFFSET))(this);
		}

		::System::Void set_MustRevalidate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_MUSTREVALIDATE_OFFSET))(this, value);
		}

		::System::Boolean get_NoCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHE_OFFSET))(this);
		}

		::System::Void set_NoCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOCACHE_OFFSET))(this, value);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_NoCacheHeaders()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHEHEADERS_OFFSET))(this);
		}

		::System::Boolean get_NoStore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOSTORE_OFFSET))(this);
		}

		::System::Void set_NoStore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOSTORE_OFFSET))(this, value);
		}

		::System::Boolean get_NoTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOTRANSFORM_OFFSET))(this);
		}

		::System::Void set_NoTransform(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_NOTRANSFORM_OFFSET))(this, value);
		}

		::System::Boolean get_OnlyIfCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_ONLYIFCACHED_OFFSET))(this);
		}

		::System::Void set_OnlyIfCached(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_ONLYIFCACHED_OFFSET))(this, value);
		}

		::System::Boolean get_Private()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATE_OFFSET))(this);
		}

		::System::Void set_Private(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PRIVATE_OFFSET))(this, value);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_PrivateHeaders()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATEHEADERS_OFFSET))(this);
		}

		::System::Boolean get_ProxyRevalidate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PROXYREVALIDATE_OFFSET))(this);
		}

		::System::Void set_ProxyRevalidate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PROXYREVALIDATE_OFFSET))(this, value);
		}

		::System::Boolean get_Public()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PUBLIC_OFFSET))(this);
		}

		::System::Void set_Public(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_PUBLIC_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::TimeSpan> get_SharedMaxAge()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_SHAREDMAXAGE_OFFSET))(this);
		}

		::System::Void set_SharedMaxAge(::System::Nullable_1<::System::TimeSpan> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SET_SHAREDMAXAGE_OFFSET))(this, value);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::CacheControlHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::CacheControlHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
