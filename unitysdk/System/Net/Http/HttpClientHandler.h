#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DecompressionMethods.h"
#include "unitysdk/System/Net/Http/HttpMessageHandler.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System::Net { class CookieContainer; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net::Http { class HttpMethod; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_CREATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19F6F0F0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_CREATEWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x19F6E680)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F6E620)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_COOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x19F6E5D0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_MAXREQUESTCONTENTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x19F6E610)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_METHODHASBODY_OFFSET UNITYSDK_OFFSET(0x19F6F6A0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x19F6F7B0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6CD10)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClientHandler_TypeDefinitionIndex = 4781;

	class HttpClientHandler : public ::System::Net::Http::HttpMessageHandler
	{
	public:
		static ::System::Int64* StaticGet_groupCounter()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HttpClientHandler_TypeDefinitionIndex)->GetStaticField(0x6490);
		}
		::System::Net::ICredentials* credentials; // 0x10
		::System::Net::CookieContainer* cookieContainer; // 0x18
		::System::String* connectionGroupName; // 0x20
		::System::Net::IWebProxy* proxy; // 0x28
		::System::Boolean allowAutoRedirect; // 0x30
		::System::Boolean useDefaultCredentials; // 0x31
		::System::Boolean useProxy; // 0x32
		::System::Boolean preAuthenticate; // 0x33
		::System::Boolean useCookies; // 0x34
		::System::Boolean disposed; // 0x35
		::System::Boolean sentRequest; // 0x36
		::System::Int64 maxRequestContentBufferSize; // 0x38
		::System::Int32 maxAutomaticRedirections; // 0x40
		::System::Net::DecompressionMethods automaticDecompression; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Net::CookieContainer* get_CookieContainer()
		{
			return ((::System::Net::CookieContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_COOKIECONTAINER_OFFSET))(this);
		}

		::System::Int64 get_MaxRequestContentBufferSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_MAXREQUESTCONTENTBUFFERSIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Net::HttpWebRequest* CreateWebRequest(::System::Net::Http::HttpRequestMessage* request)
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_CREATEWEBREQUEST_OFFSET))(this, request);
		}

		::System::Net::Http::HttpResponseMessage* CreateResponseMessage(::System::Net::HttpWebResponse* wr, ::System::Net::Http::HttpRequestMessage* requestMessage, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Net::Http::HttpResponseMessage*(*)(::PVOID, ::System::Net::HttpWebResponse*, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_CREATERESPONSEMESSAGE_OFFSET))(this, wr, requestMessage, cancellationToken);
		}

		static ::System::Boolean MethodHasBody(::System::Net::Http::HttpMethod* method)
		{
			return ((::System::Boolean(*)(::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_METHODHASBODY_OFFSET))(method);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SENDASYNC_OFFSET))(this, request, cancellationToken);
		}
	};
}
