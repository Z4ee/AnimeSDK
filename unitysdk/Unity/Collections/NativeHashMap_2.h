#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeHashMap_2.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeHashMap_2_TypeDefinitionIndex = 20156;

	template <typename TKey, typename TValue>
	struct NativeHashMap_2
	{
		::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey, TValue> m_HashMapData; // 0x0
	};
}
