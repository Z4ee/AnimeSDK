#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCreationOptions_TypeDefinitionIndex = 904;

	enum class TaskCreationOptions : ::System::Int32
	{
		None = 0,
		PreferFairness = 1,
		LongRunning = 2,
		AttachedToParent = 4,
		DenyChildAttach = 8,
		HideScheduler = 16,
		RunContinuationsAsynchronously = 64,
	};
}
