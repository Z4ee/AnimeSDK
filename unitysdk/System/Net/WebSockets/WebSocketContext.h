#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Net { class CookieCollection; }
namespace System::Net::WebSockets { class WebSocket; }
namespace System::Security::Principal { class IPrincipal; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B00FD0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketContext_TypeDefinitionIndex = 3901;

	class WebSocketContext : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
