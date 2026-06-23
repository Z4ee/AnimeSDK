#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeHashMapData.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeHashMap_2_TypeDefinitionIndex = 18472;

	template <typename TKey, typename TValue>
	struct UnsafeHashMap_2
	{
		::Unity::Collections::LowLevel::Unsafe::UnsafeHashMapData* m_Buffer; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
