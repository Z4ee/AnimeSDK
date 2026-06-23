#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int CollectionHelper_LongDoubleUnion_TypeDefinitionIndex = 18454;

	struct alignas(8) CollectionHelper_LongDoubleUnion
	{
		::System::Int64 longValue; // 0x10
		::System::Double doubleValue; // 0x10
	};
}
