#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpMethod; }
namespace System::Net::Http::Headers { class HttpRequestHeaders; }

#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x19F73FD0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F73FB0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x19F73C70)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x19F6D730)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x19F73C90)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x19F73CA0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x19F6F0B0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_ISALLOWEDABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x19F73CB0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SETISUSED_OFFSET UNITYSDK_OFFSET(0x19F6D6A0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x19F73C80)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x19F73BE0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x19F6D6B0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F74000)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F73AE0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6D140)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpRequestMessage_TypeDefinitionIndex = 4793;

	class HttpRequestMessage : public ::System::Object
	{
	public:
		::System::Net::Http::HttpMethod* method; // 0x10
		::System::Version* version; // 0x18
		::System::Net::Http::HttpContent* _Content_k__BackingField; // 0x20
		::System::Uri* uri; // 0x28
		::System::Net::Http::Headers::HttpRequestHeaders* headers; // 0x30
		::System::Boolean is_used; // 0x38
		::System::Boolean disposed; // 0x39

		::System::Void _ctor(::System::Net::Http::HttpMethod* method, ::System::String* requestUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_OFFSET))(this, method, requestUri);
		}

		::System::Void _ctor_1(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_1_OFFSET))(this, method, requestUri);
		}

		::System::Net::Http::HttpContent* get_Content()
		{
			return ((::System::Net::Http::HttpContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::Net::Http::HttpContent* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpContent*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_CONTENT_OFFSET))(this, value);
		}

		::System::Net::Http::Headers::HttpRequestHeaders* get_Headers()
		{
			return ((::System::Net::Http::Headers::HttpRequestHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET))(this);
		}

		::System::Net::Http::HttpMethod* get_Method()
		{
			return ((::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::Net::Http::HttpMethod* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET))(this, value);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Void set_RequestUri(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_REQUESTURI_OFFSET))(this, value);
		}

		static ::System::Boolean IsAllowedAbsoluteUri(::System::Uri* uri)
		{
			return ((::System::Boolean(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_ISALLOWEDABSOLUTEURI_OFFSET))(uri);
		}

		::System::Version* get_Version()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_VERSION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean SetIsUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SETISUSED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_TOSTRING_OFFSET))(this);
		}
	};
}
