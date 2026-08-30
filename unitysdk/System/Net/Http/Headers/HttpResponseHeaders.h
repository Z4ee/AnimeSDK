#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaders.h"

#define SYSTEM_NET_HTTP_HEADERS_HTTPRESPONSEHEADERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78C670)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpResponseHeaders_TypeDefinitionIndex = 3798;

	class HttpResponseHeaders : public ::System::Net::Http::Headers::HttpHeaders
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPRESPONSEHEADERS__CTOR_OFFSET))(this);
		}
	};
}
