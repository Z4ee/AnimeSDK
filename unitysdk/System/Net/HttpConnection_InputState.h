#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpConnection_InputState_TypeDefinitionIndex = 2840;

	enum class HttpConnection_InputState : ::System::Int32
	{
		RequestLine = 0,
		Headers = 1,
	};
}
