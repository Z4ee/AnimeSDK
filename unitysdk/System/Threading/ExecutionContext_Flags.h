#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContext_Flags_TypeDefinitionIndex = 832;

	enum class ExecutionContext_Flags : ::System::Int32
	{
		None = 0,
		IsNewCapture = 1,
		IsFlowSuppressed = 2,
		IsPreAllocatedDefault = 4,
	};
}
