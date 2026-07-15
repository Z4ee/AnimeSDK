#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int ReadOnlySpan_1_Enumerator_TypeDefinitionIndex = 4958;

	template <typename T>
	struct ReadOnlySpan_1_Enumerator
	{
		::System::ReadOnlySpan_1<T> _span; // 0x0
		::System::Int32 _index; // 0x0
	};
}
