#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/HttpCompletionOption.h"
#include "unitysdk/System/Net/Http/HttpMessageInvoker.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpMessageHandler; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Net::Http::Headers { class HttpRequestHeaders; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTP_HTTPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B01F1F0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_GETASYNC_OFFSET UNITYSDK_OFFSET(0x1B01F290)
#define SYSTEM_NET_HTTP_HTTPCLIENT_POSTASYNC_OFFSET UNITYSDK_OFFSET(0x1B01F500)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNCWORKER_OFFSET UNITYSDK_OFFSET(0x1B01FBD0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B01FAA0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_2_OFFSET UNITYSDK_OFFSET(0x1B01F670)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1B01F490)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B01F100)
#define SYSTEM_NET_HTTP_HTTPCLIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B01FCC0)
#define SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B01EF90)
#define SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B01EE40)
#define SYSTEM_NET_HTTP_HTTPCLIENT___N__0_OFFSET UNITYSDK_OFFSET(0x1B01FD00)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClient_TypeDefinitionIndex = 24706;

	class HttpClient : public ::System::Net::Http::HttpMessageInvoker
	{
	public:
		static ::System::TimeSpan* StaticGet_TimeoutDefault()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(HttpClient_TypeDefinitionIndex)->GetStaticField(0x4680);
		}
		::System::Uri* base_address; // 0x20
		::System::Net::Http::Headers::HttpRequestHeaders* headers; // 0x28
		::System::Threading::CancellationTokenSource* cts; // 0x30
		::System::TimeSpan timeout; // 0x38
		::System::Int64 buffer_size; // 0x40
		::System::Boolean disposed; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Http::HttpMessageHandler* handler, ::System::Boolean disposeHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMessageHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_1_OFFSET))(this, handler, disposeHandler);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__CCTOR_OFFSET))();
		}

		::System::Void set_Timeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* GetAsync(::System::String* requestUri)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_GETASYNC_OFFSET))(this, requestUri);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* PostAsync(::System::String* requestUri, ::System::Net::Http::HttpContent* content)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::String*, ::System::Net::Http::HttpContent*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_POSTASYNC_OFFSET))(this, requestUri, content);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET))(this, request);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync_1(::System::Net::Http::HttpRequestMessage* request, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_1_OFFSET))(this, request, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync_2(::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_2_OFFSET))(this, request, completionOption, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsyncWorker(::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNCWORKER_OFFSET))(this, request, completionOption, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* __n__0(::System::Net::Http::HttpRequestMessage* request, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT___N__0_OFFSET))(this, request, cancellationToken);
		}
	};
}
