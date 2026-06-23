#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketError_TypeDefinitionIndex = 3901;

	enum class WebSocketError : ::System::Int32
	{
		Success = 0,
		InvalidMessageType = 1,
		Faulted = 2,
		NativeError = 3,
		NotAWebSocket = 4,
		UnsupportedVersion = 5,
		UnsupportedProtocol = 6,
		HeaderError = 7,
		ConnectionClosedPrematurely = 8,
		InvalidState = 9,
	};
}
