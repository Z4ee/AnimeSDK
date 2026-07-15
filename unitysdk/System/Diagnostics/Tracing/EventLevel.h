#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventLevel_TypeDefinitionIndex = 1705;

	enum class EventLevel : ::System::Int32
	{
		LogAlways = 0,
		Critical = 1,
		Error = 2,
		Warning = 3,
		Informational = 4,
		Verbose = 5,
	};
}
