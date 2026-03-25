#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Version; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http::Headers { class HttpResponseHeaders; }

#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18539540)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18539520)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x18539470)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x18534840)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_REASONPHRASE_OFFSET UNITYSDK_OFFSET(0x18539490)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x185394D0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x185394E0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x18539480)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REASONPHRASE_OFFSET UNITYSDK_OFFSET(0x185394B0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REQUESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x185394C0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x18539430)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18539570)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18534740)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpResponseMessage_TypeDefinitionIndex = 4786;

	class HttpResponseMessage : public ::System::Object
	{
	public:
		::System::Version* version; // 0x10
		::System::Net::Http::HttpContent* _Content_k__BackingField; // 0x18
		::System::String* reasonPhrase; // 0x20
		::System::Net::Http::HttpRequestMessage* _RequestMessage_k__BackingField; // 0x28
		::System::Net::Http::Headers::HttpResponseHeaders* headers; // 0x30
		::System::Net::HttpStatusCode statusCode; // 0x38
		::System::Boolean disposed; // 0x3C

		::System::Void _ctor(::System::Net::HttpStatusCode statusCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE__CTOR_OFFSET))(this, statusCode);
		}

		::System::Net::Http::HttpContent* get_Content()
		{
			return ((::System::Net::Http::HttpContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::Net::Http::HttpContent* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpContent*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_CONTENT_OFFSET))(this, value);
		}

		::System::Net::Http::Headers::HttpResponseHeaders* get_Headers()
		{
			return ((::System::Net::Http::Headers::HttpResponseHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_ReasonPhrase()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_REASONPHRASE_OFFSET))(this);
		}

		::System::Void set_ReasonPhrase(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REASONPHRASE_OFFSET))(this, value);
		}

		::System::Void set_RequestMessage(::System::Net::Http::HttpRequestMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REQUESTMESSAGE_OFFSET))(this, value);
		}

		::System::Net::HttpStatusCode get_StatusCode()
		{
			return ((::System::Net::HttpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_STATUSCODE_OFFSET))(this);
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

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_TOSTRING_OFFSET))(this);
		}
	};
}
