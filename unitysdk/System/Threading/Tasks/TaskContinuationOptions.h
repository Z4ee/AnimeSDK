#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskContinuationOptions_TypeDefinitionIndex = 909;

	enum class TaskContinuationOptions : ::System::Int32
	{
		None = 0,
		PreferFairness = 1,
		LongRunning = 2,
		AttachedToParent = 4,
		DenyChildAttach = 8,
		HideScheduler = 16,
		LazyCancellation = 32,
		RunContinuationsAsynchronously = 64,
		NotOnRanToCompletion = 65536,
		NotOnFaulted = 131072,
		NotOnCanceled = 262144,
		OnlyOnRanToCompletion = 393216,
		OnlyOnFaulted = 327680,
		OnlyOnCanceled = 196608,
		ExecuteSynchronously = 524288,
	};
}
