#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TimerThreadState_TypeDefinitionIndex = 3398;

	enum class TimerThread_TimerThreadState : ::System::Int32
	{
		Idle = 0,
		Running = 1,
		Stopped = 2,
	};
}
