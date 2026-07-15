#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Buffer_1_TypeDefinitionIndex = 3173;

	template <typename TElement>
	struct Buffer_1
	{
		::Il2CppArray<TElement>* items; // 0x0
		::System::Int32 count; // 0x0
	};
}
