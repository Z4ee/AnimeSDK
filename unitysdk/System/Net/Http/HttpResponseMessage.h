#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Version; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http::Headers { class HttpResponseHeaders; }

#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E8520C0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E8520A0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_ENSURESUCCESSSTATUSCODE_OFFSET UNITYSDK_OFFSET(0x1E8520F0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1E851FF0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1E84C4E0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_ISSUCCESSSTATUSCODE_OFFSET UNITYSDK_OFFSET(0x1E852000)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_REASONPHRASE_OFFSET UNITYSDK_OFFSET(0x1E852010)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E852030)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1E851F90)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8521A0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E84C380)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E851F50)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpResponseMessage_TypeDefinitionIndex = 26695;

	class HttpResponseMessage : public ::System::Object
	{
	public:
		::System::Net::Http::HttpRequestMessage* _RequestMessage_k__BackingField; // 0x10
		::System::Net::Http::HttpContent* _Content_k__BackingField; // 0x18
		::System::String* reasonPhrase; // 0x20
		::System::Version* version; // 0x28
		::System::Net::Http::Headers::HttpResponseHeaders* headers; // 0x30
		::System::Boolean disposed; // 0x38
		::System::Net::HttpStatusCode statusCode; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::HttpStatusCode statusCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE__CTOR_1_OFFSET))(this, statusCode);
		}

		::System::Net::Http::HttpContent* get_Content()
		{
			return ((::System::Net::Http::HttpContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_CONTENT_OFFSET))(this);
		}

		::System::Net::Http::Headers::HttpResponseHeaders* get_Headers()
		{
			return ((::System::Net::Http::Headers::HttpResponseHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_HEADERS_OFFSET))(this);
		}

		::System::Boolean get_IsSuccessStatusCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_ISSUCCESSSTATUSCODE_OFFSET))(this);
		}

		::System::String* get_ReasonPhrase()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_REASONPHRASE_OFFSET))(this);
		}

		::System::Void set_StatusCode(::System::Net::HttpStatusCode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_STATUSCODE_OFFSET))(this, value);
		}

		::System::Version* get_Version()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_VERSION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Net::Http::HttpResponseMessage* EnsureSuccessStatusCode()
		{
			return ((::System::Net::Http::HttpResponseMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_ENSURESUCCESSSTATUSCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_TOSTRING_OFFSET))(this);
		}
	};
}
