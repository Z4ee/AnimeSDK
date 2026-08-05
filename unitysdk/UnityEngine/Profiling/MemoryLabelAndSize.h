#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int MemoryLabelAndSize_TypeDefinitionIndex = 5434;

	struct alignas(8) MemoryLabelAndSize
	{
		::System::UInt64 size; // 0x10
		::System::Int32 label; // 0x18
	};
}
