#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpConnection_LineState_TypeDefinitionIndex = 2841;

	enum class HttpConnection_LineState : ::System::Int32
	{
		None = 0,
		CR = 1,
		LF = 2,
	};
}
