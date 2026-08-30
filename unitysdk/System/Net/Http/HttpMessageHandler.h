#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E7961C0)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E79B590)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E796110)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMessageHandler_TypeDefinitionIndex = 3768;

	class HttpMessageHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_1_OFFSET))(this, a1);
		}
	};
}
