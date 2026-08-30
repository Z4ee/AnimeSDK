#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaders.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http::Headers { class MediaTypeHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E786380)
#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E786670)
#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E7866B0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7861C0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpContentHeaders_TypeDefinitionIndex = 3790;

	class HttpContentHeaders : public ::System::Net::Http::Headers::HttpHeaders
	{
	public:
		::System::Net::Http::HttpContent* content; // 0x20

		::System::Void _ctor(::System::Net::Http::HttpContent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpContent*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS__CTOR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int64> get_ContentLength()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Net::Http::Headers::MediaTypeHeaderValue* get_ContentType()
		{
			return ((::System::Net::Http::Headers::MediaTypeHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::Net::Http::Headers::MediaTypeHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::MediaTypeHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_SET_CONTENTTYPE_OFFSET))(this, a1);
		}
	};
}
