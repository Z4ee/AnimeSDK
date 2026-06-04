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

#define SYSTEM_NET_HTTP_HTTPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADE2CC0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_GET_MAXRESPONSECONTENTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1ADE2CB0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_POSTASYNC_OFFSET UNITYSDK_OFFSET(0x1ADE2DD0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNCWORKER_OFFSET UNITYSDK_OFFSET(0x1ADE3540)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1ADE3460)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_2_OFFSET UNITYSDK_OFFSET(0x1ADE2FD0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1ADE2F90)
#define SYSTEM_NET_HTTP_HTTPCLIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADE35F0)
#define SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADE2B90)
#define SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE29B0)
#define SYSTEM_NET_HTTP_HTTPCLIENT___N__0_OFFSET UNITYSDK_OFFSET(0x1ADE3600)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClient_TypeDefinitionIndex = 3746;

	class HttpClient : public ::System::Net::Http::HttpMessageInvoker
	{
	public:
		static ::System::TimeSpan* StaticGet_TimeoutDefault()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(HttpClient_TypeDefinitionIndex)->GetStaticField(0x9CD0);
		}
		::System::Threading::CancellationTokenSource* cts; // 0x20
		::System::Net::Http::Headers::HttpRequestHeaders* headers; // 0x28
		::System::Uri* base_address; // 0x30
		::System::Boolean disposed; // 0x38
		::System::TimeSpan timeout; // 0x40
		::System::Int64 buffer_size; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Http::HttpMessageHandler* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMessageHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT__CCTOR_OFFSET))();
		}

		::System::Int64 get_MaxResponseContentBufferSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_GET_MAXRESPONSECONTENTBUFFERSIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_DISPOSE_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* PostAsync(::System::String* a1, ::System::Net::Http::HttpContent* a2)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::String*, ::System::Net::Http::HttpContent*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_POSTASYNC_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* a1)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync_1(::System::Net::Http::HttpRequestMessage* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_1_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync_2(::System::Net::Http::HttpRequestMessage* a1, ::System::Net::Http::HttpCompletionOption a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsyncWorker(::System::Net::Http::HttpRequestMessage* a1, ::System::Net::Http::HttpCompletionOption a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNCWORKER_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* __n__0(::System::Net::Http::HttpRequestMessage* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT___N__0_OFFSET))(this, a1, a2);
		}
	};
}
