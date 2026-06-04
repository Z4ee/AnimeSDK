#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Net::Http { class HttpMessageHandler; }
namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1ADE2D90)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADE8FF0)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1ADE3700)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE2C60)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMessageInvoker_TypeDefinitionIndex = 3757;

	class HttpMessageInvoker : public ::System::Object
	{
	public:
		::System::Net::Http::HttpMessageHandler* handler; // 0x10
		::System::Boolean disposeHandler; // 0x18

		::System::Void _ctor(::System::Net::Http::HttpMessageHandler* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMessageHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_SENDASYNC_OFFSET))(this, a1, a2);
		}
	};
}
