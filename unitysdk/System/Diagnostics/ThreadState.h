#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int ThreadState_TypeDefinitionIndex = 2802;

	enum class ThreadState : ::System::Int32
	{
		Initialized = 0,
		Ready = 1,
		Running = 2,
		Standby = 3,
		Terminated = 4,
		Transition = 6,
		Unknown = 7,
		Wait = 5,
	};
}
