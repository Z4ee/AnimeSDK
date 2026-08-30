#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskStatus_TypeDefinitionIndex = 898;

	enum class TaskStatus : ::System::Int32
	{
		Created = 0,
		WaitingForActivation = 1,
		WaitingToRun = 2,
		Running = 3,
		WaitingForChildrenToComplete = 4,
		RanToCompletion = 5,
		Canceled = 6,
		Faulted = 7,
	};
}
