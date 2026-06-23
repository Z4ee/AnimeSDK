#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int ThreadPriorityLevel_TypeDefinitionIndex = 2801;

	enum class ThreadPriorityLevel : ::System::Int32
	{
		AboveNormal = 1,
		BelowNormal = -1,
		Highest = 2,
		Idle = -15,
		Lowest = -2,
		Normal = 0,
		TimeCritical = 15,
	};
}
