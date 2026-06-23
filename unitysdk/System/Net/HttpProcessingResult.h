#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpProcessingResult_TypeDefinitionIndex = 3321;

	enum class HttpProcessingResult : ::System::Int32
	{
		Continue = 0,
		ReadWait = 1,
		WriteWait = 2,
	};
}
