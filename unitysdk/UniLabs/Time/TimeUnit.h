#pragma once
#include "unitysdk/unitysdk.h"

namespace UniLabs::Time
{
	inline static constexpr unsigned int TimeUnit_TypeDefinitionIndex = 85823;

	enum class TimeUnit : ::System::Int32
	{
		None = 0,
		Milliseconds = 1,
		Seconds = 2,
		Minutes = 3,
		Hours = 4,
		Days = 5,
	};
}
