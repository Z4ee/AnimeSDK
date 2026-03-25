#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int InternalTaskOptions_TypeDefinitionIndex = 903;

	enum class InternalTaskOptions : ::System::Int32
	{
		None = 0,
		InternalOptionsMask = 65280,
		ChildReplica = 256,
		ContinuationTask = 512,
		PromiseTask = 1024,
		SelfReplicating = 2048,
		LazyCancellation = 4096,
		QueuedByRuntime = 8192,
		DoNotDispose = 16384,
	};
}
