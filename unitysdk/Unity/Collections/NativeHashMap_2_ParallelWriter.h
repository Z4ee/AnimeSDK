#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeHashMap_2_ParallelWriter.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeHashMap_2_ParallelWriter_TypeDefinitionIndex = 18460;

	template <typename TKey, typename TValue>
	struct NativeHashMap_2_ParallelWriter
	{
		::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2_ParallelWriter<TKey, TValue> m_Writer; // 0x0
	};
}
