#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int ScheduleMode_TypeDefinitionIndex = 5066;

	enum class ScheduleMode : ::System::Int32
	{
		Run = 0,
		Batched = 1,
	};
}
