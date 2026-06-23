#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobThreadDelegatePriority_TypeDefinitionIndex = 5068;

	enum class JobThreadDelegatePriority : ::System::Int32
	{
		NormalJobPriority = 0,
		HighJobPriority = 1,
		JobDelegateBackGroundPriority = 2,
		JobDelegateLowPriority = 4,
	};
}
