#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Concat_3_TypeDefinitionIndex = 6363;

	template <typename TEnumerator1, typename TEnumerator2, typename TSource>
	struct Concat_3
	{
		TEnumerator1 first; // 0x0
		TEnumerator2 second; // 0x0
		::System::Boolean firstCompleted; // 0x0
	};
}
