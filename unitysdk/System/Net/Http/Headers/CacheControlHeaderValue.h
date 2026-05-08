#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B00DC00)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B00DDD0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1B00D5B0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHEHEADERS_OFFSET UNITYSDK_OFFSET(0x1B00D640)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATEHEADERS_OFFSET UNITYSDK_OFFSET(0x1B00D6D0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1B00D760)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B00EF70)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1B00DFC0)
#define SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00EE10)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CacheControlHeaderValue_TypeDefinitionIndex = 24726;

	class CacheControlHeaderValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* private_headers; // 0x10
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* extensions; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* no_cache_headers; // 0x20
		::System::Nullable_1<::System::TimeSpan> _MaxAge_k__BackingField; // 0x28
		::System::Nullable_1<::System::TimeSpan> _SharedMaxAge_k__BackingField; // 0x38
		::System::Nullable_1<::System::TimeSpan> _MinFresh_k__BackingField; // 0x48
		::System::Boolean _NoStore_k__BackingField; // 0x58
		::System::Boolean _MustRevalidate_k__BackingField; // 0x59
		::System::Boolean _NoCache_k__BackingField; // 0x5A
		::System::Boolean _ProxyRevalidate_k__BackingField; // 0x5B
		::System::Boolean _NoTransform_k__BackingField; // 0x5C
		::System::Nullable_1<::System::TimeSpan> _MaxStaleLimit_k__BackingField; // 0x60
		::System::Boolean _Public_k__BackingField; // 0x70
		::System::Boolean _MaxStale_k__BackingField; // 0x71
		::System::Boolean _Private_k__BackingField; // 0x72
		::System::Boolean _OnlyIfCached_k__BackingField; // 0x73

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Extensions()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_EXTENSIONS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_NoCacheHeaders()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_NOCACHEHEADERS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_PrivateHeaders()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CACHECONTROLHEADERVALUE_GET_PRIVATEHEADERS_OFFSET))(this);
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
