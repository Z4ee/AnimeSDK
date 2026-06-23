#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int ThreadWaitReason_TypeDefinitionIndex = 2803;

	enum class ThreadWaitReason : ::System::Int32
	{
		EventPairHigh = 7,
		EventPairLow = 8,
		ExecutionDelay = 4,
		Executive = 0,
		FreePage = 1,
		LpcReceive = 9,
		LpcReply = 10,
		PageIn = 2,
		PageOut = 12,
		Suspended = 5,
		SystemAllocation = 3,
		Unknown = 13,
		UserRequest = 6,
		VirtualMemory = 11,
	};
}
