#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterInstanceLifetime_TypeDefinitionIndex = 4180;

	enum class PerformanceCounterInstanceLifetime : ::System::Int32
	{
		Global = 0,
		Process = 1,
	};
}
