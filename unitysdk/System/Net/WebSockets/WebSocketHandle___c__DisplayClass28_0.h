#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41F030)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__DISPLAYCLASS28_0__PARSEANDVALIDATECONNECTRESPONSEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B41F040)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle___c__DisplayClass28_0_TypeDefinitionIndex = 3895;

	class WebSocketHandle___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::String* headerValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ParseAndValidateConnectResponseAsync_b__0(::System::String* requested)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__DISPLAYCLASS28_0__PARSEANDVALIDATECONNECTRESPONSEASYNC_B__0_OFFSET))(this, requested);
		}
	};
}
