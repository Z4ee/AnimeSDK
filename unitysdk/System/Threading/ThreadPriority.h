#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPriority_TypeDefinitionIndex = 866;

	enum class ThreadPriority : ::System::Int32
	{
		Lowest = 0,
		BelowNormal = 1,
		Normal = 2,
		AboveNormal = 3,
		Highest = 4,
	};
}
