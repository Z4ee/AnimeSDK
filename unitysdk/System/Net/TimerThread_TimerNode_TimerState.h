#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TimerNode_TimerState_TypeDefinitionIndex = 2784;

	enum class TimerThread_TimerNode_TimerState : ::System::Int32
	{
		Ready = 0,
		Fired = 1,
		Cancelled = 2,
		Sentinel = 3,
	};
}
