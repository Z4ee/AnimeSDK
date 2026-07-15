#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ConcurrentSet_2_TypeDefinitionIndex = 1582;

	template <typename KeyType, typename ItemType>
	struct ConcurrentSet_2
	{
		::Il2CppArray<ItemType>* items; // 0x0
	};
}
