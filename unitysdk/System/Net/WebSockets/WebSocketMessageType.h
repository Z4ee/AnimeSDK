#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketMessageType_TypeDefinitionIndex = 3903;

	enum class WebSocketMessageType : ::System::Int32
	{
		Text = 0,
		Binary = 1,
		Close = 2,
	};
}
