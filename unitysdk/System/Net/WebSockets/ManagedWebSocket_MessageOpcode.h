#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket_MessageOpcode_TypeDefinitionIndex = 3874;

	enum class ManagedWebSocket_MessageOpcode : ::System::Byte
	{
		Continuation = 0x0,
		Text = 0x1,
		Binary = 0x2,
		Close = 0x8,
		Ping = 0x9,
		Pong = 0xA,
	};
}
