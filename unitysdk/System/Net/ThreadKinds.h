#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int ThreadKinds_TypeDefinitionIndex = 3380;

	enum class ThreadKinds : ::System::Int32
	{
		Unknown = 0,
		User = 1,
		System = 2,
		Sync = 4,
		Async = 8,
		Timer = 16,
		CompletionPort = 32,
		Worker = 64,
		Finalization = 128,
		Other = 256,
		OwnerMask = 3,
		SyncMask = 12,
		SourceMask = 496,
		SafeSources = 352,
		ThreadPool = 96,
	};
}
