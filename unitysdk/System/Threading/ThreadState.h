#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int ThreadState_TypeDefinitionIndex = 864;

	enum class ThreadState : ::System::Int32
	{
		Running = 0,
		StopRequested = 1,
		SuspendRequested = 2,
		Background = 4,
		Unstarted = 8,
		Stopped = 16,
		WaitSleepJoin = 32,
		Suspended = 64,
		AbortRequested = 128,
		Aborted = 256,
	};
}
