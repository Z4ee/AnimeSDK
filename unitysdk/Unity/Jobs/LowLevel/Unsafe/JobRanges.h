#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobRanges_TypeDefinitionIndex = 3955;

	struct alignas(8) JobRanges
	{
		::System::Int32 BatchSize; // 0x10
		::System::Int32 NumJobs; // 0x14
		::System::Int32 TotalIterationCount; // 0x18
		::System::Int32 NumPhases; // 0x1C
		::System::IntPtr StartEndIndex; // 0x20
		::System::IntPtr PhaseData; // 0x28
	};
}
