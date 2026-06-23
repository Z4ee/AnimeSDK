#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketState_TypeDefinitionIndex = 3905;

	enum class WebSocketState : ::System::Int32
	{
		None = 0,
		Connecting = 1,
		Open = 2,
		CloseSent = 3,
		CloseReceived = 4,
		Closed = 5,
		Aborted = 6,
	};
}
