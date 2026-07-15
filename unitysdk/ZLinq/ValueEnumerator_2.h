#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZLinq
{
	inline static constexpr unsigned int ValueEnumerator_2_TypeDefinitionIndex = 6342;

	template <typename TEnumerator, typename T>
	struct ValueEnumerator_2
	{
		TEnumerator enumerator; // 0x0
		T current; // 0x0
	};
}
