#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContext_CaptureOptions_TypeDefinitionIndex = 829;

	enum class ExecutionContext_CaptureOptions : ::System::Int32
	{
		None = 0,
		IgnoreSyncCtx = 1,
		OptimizeDefaultCase = 2,
	};
}
