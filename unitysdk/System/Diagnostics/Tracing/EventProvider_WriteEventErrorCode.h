#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventProvider_WriteEventErrorCode_TypeDefinitionIndex = 1677;

	enum class EventProvider_WriteEventErrorCode : ::System::Int32
	{
		NoError = 0,
		NoFreeBuffers = 1,
		EventTooBig = 2,
		NullInput = 3,
		TooManyArgs = 4,
		Other = 5,
	};
}
