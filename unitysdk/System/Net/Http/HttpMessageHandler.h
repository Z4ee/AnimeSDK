#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Net::Http { class HttpRequestMessage; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E84B510)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E850FD0)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84B430)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMessageHandler_TypeDefinitionIndex = 26690;

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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
