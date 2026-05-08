#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeMultiHashMapIterator_1_TypeDefinitionIndex = 20155;

	template <typename TKey>
	struct NativeMultiHashMapIterator_1
	{
		TKey key; // 0x0
		::System::Int32 NextEntryIndex; // 0x0
		::System::Int32 EntryIndex; // 0x0
	};
}
