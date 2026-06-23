#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ClientWebSocket_InternalState_TypeDefinitionIndex = 3888;

	enum class ClientWebSocket_InternalState : ::System::Int32
	{
		Created = 0,
		Connecting = 1,
		Connected = 2,
		Disposed = 3,
	};
}
