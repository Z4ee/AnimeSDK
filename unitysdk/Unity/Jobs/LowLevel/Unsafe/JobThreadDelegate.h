#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobThreadDelegate_TypeDefinitionIndex = 5069;

	struct alignas(8) JobThreadDelegate
	{
		::System::Int32 numJobs; // 0x10
		::System::Int32 jobPriority; // 0x14
		::System::UInt64 jobdepend; // 0x18
		::System::IntPtr jobFuncs; // 0x20
		::System::IntPtr jobDatas; // 0x28
	};
}
