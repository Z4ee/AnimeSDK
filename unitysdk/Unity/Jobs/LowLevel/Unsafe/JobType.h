#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobType_TypeDefinitionIndex = 3957;

	enum class JobType : ::System::Int32
	{
		Single = 0,
		ParallelFor = 1,
	};
}
