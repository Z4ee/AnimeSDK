#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadPriority_TypeDefinitionIndex = 4011;

	enum class ThreadPriority : ::System::Int32
	{
		Low = 0,
		BelowNormal = 1,
		Normal = 2,
		High = 4,
	};
}
