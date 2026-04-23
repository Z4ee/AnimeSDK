#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Net::Http { class HttpMessageHandler; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x19F6CF90)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F73460)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x19F6D930)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6CE90)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMessageInvoker_TypeDefinitionIndex = 4790;

	class HttpMessageInvoker : public ::System::Object
	{
	public:
		::System::Net::Http::HttpMessageHandler* handler; // 0x10
		::System::Boolean disposeHandler; // 0x18

		::System::Void _ctor(::System::Net::Http::HttpMessageHandler* handler, ::System::Boolean disposeHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMessageHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER__CTOR_OFFSET))(this, handler, disposeHandler);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_SENDASYNC_OFFSET))(this, request, cancellationToken);
		}
	};
}
