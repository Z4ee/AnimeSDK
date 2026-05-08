#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpMethod; }
namespace System::Net::Http::Headers { class HttpRequestHeaders; }

#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B027180)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B027160)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1B01FB70)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B021680)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_ISALLOWEDABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x1B026E70)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SETISUSED_OFFSET UNITYSDK_OFFSET(0x1B01FAB0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1B026DE0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1B01FAC0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B0271B0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B01F3F0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B026D40)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B026CD0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpRequestMessage_TypeDefinitionIndex = 24721;

	class HttpRequestMessage : public ::System::Object
	{
	public:
		::System::Net::Http::HttpMethod* method; // 0x10
		::System::Net::Http::Headers::HttpRequestHeaders* headers; // 0x18
		::System::Version* version; // 0x20
		::System::Uri* uri; // 0x28
		::System::Net::Http::HttpContent* _Content_k__BackingField; // 0x30
		::System::Boolean disposed; // 0x38
		::System::Boolean is_used; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Http::HttpMethod* method, ::System::String* requestUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_1_OFFSET))(this, method, requestUri);
		}

		::System::Void _ctor_2(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_2_OFFSET))(this, method, requestUri);
		}

		::System::Net::Http::Headers::HttpRequestHeaders* get_Headers()
		{
			return ((::System::Net::Http::Headers::HttpRequestHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Method(::System::Net::Http::HttpMethod* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET))(this, value);
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
