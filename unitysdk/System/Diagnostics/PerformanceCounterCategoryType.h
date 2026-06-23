#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterCategoryType_TypeDefinitionIndex = 4062;

	enum class PerformanceCounterCategoryType : ::System::Int32
	{
		MultiInstance = 1,
		SingleInstance = 0,
		Unknown = -1,
	};
}
