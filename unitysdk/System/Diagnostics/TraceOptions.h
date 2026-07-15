#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceOptions_TypeDefinitionIndex = 2537;

	enum class TraceOptions : ::System::Int32
	{
		None = 0,
		LogicalOperationStack = 1,
		DateTime = 2,
		Timestamp = 4,
		ProcessId = 8,
		ThreadId = 16,
		Callstack = 32,
	};
}
