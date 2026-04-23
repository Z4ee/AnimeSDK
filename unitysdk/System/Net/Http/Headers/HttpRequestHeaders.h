#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaders.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace System::Net::Http::Headers { class TransferCodingHeaderValue; }
namespace System::Net::Http::Headers { template <typename T> class HttpHeaderValueCollection_1; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_ADDHEADERS_OFFSET UNITYSDK_OFFSET(0x19F64760)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONCLOSE_OFFSET UNITYSDK_OFFSET(0x19F64190)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x19F64330)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x19F64170)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x19F64480)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_HOST_OFFSET UNITYSDK_OFFSET(0x19F645E0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODINGCHUNKED_OFFSET UNITYSDK_OFFSET(0x19F64620)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x19F645C0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS__CTOR_OFFSET UNITYSDK_OFFSET(0x19F64080)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpRequestHeaders_TypeDefinitionIndex = 4817;

	class HttpRequestHeaders : public ::System::Net::Http::Headers::HttpHeaders
	{
	public:
		::System::Nullable_1<::System::Boolean> expectContinue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS__CTOR_OFFSET))(this);
		}

		::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::String*>* get_Connection()
		{
			return ((::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTION_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> get_ConnectionClose()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONCLOSE_OFFSET))(this);
		}

		::System::Boolean get_ConnectionKeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONKEEPALIVE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> get_ExpectContinue()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_EXPECTCONTINUE_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_HOST_OFFSET))(this);
		}

		::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* get_TransferEncoding()
		{
			return ((::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODING_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> get_TransferEncodingChunked()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODINGCHUNKED_OFFSET))(this);
		}

		::System::Void AddHeaders(::System::Net::Http::Headers::HttpRequestHeaders* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::HttpRequestHeaders*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_ADDHEADERS_OFFSET))(this, headers);
		}
	};
}
