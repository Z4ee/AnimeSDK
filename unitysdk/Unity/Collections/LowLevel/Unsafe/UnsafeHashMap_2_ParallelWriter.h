#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeHashMapData.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeHashMap_2_ParallelWriter_TypeDefinitionIndex = 18473;

	template <typename TKey, typename TValue>
	struct UnsafeHashMap_2_ParallelWriter
	{
		::Unity::Collections::LowLevel::Unsafe::UnsafeHashMapData* m_Buffer; // 0x0
		::System::Int32 m_ThreadIndex; // 0x0
	};
}
