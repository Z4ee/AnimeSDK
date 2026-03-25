#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Exception_ExceptionMessageKind_TypeDefinitionIndex = 246;

	enum class Exception_ExceptionMessageKind : ::System::Int32
	{
		ThreadAbort = 1,
		ThreadInterrupted = 2,
		OutOfMemory = 3,
	};
}
