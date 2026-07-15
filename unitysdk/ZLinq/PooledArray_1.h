#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace ZLinq
{
	inline static constexpr unsigned int PooledArray_1_TypeDefinitionIndex = 6339;

	template <typename TSource>
	struct PooledArray_1
	{
		::Il2CppArray<TSource>* array; // 0x0
		::System::Int32 size; // 0x0
	};
}
