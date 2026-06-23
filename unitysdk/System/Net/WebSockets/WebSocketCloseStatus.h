#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketCloseStatus_TypeDefinitionIndex = 3899;

	enum class WebSocketCloseStatus : ::System::Int32
	{
		NormalClosure = 1000,
		EndpointUnavailable = 1001,
		ProtocolError = 1002,
		InvalidMessageType = 1003,
		Empty = 1005,
		InvalidPayloadData = 1007,
		PolicyViolation = 1008,
		MessageTooBig = 1009,
		MandatoryExtension = 1010,
		InternalServerError = 1011,
	};
}
