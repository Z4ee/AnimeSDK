#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerRequestUriBuilder_ParsingResult_TypeDefinitionIndex = 2728;

	enum class HttpListenerRequestUriBuilder_ParsingResult : ::System::Int32
	{
		Success = 0,
		InvalidString = 1,
		EncodingError = 2,
	};
}
