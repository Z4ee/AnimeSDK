#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ValueType.h"

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromMemory_1_TypeDefinitionIndex = 6353;

	template <typename T>
	struct FromMemory_1
	{
		::System::ReadOnlyMemory_1<T> _source_P; // 0x0
		::System::Int32 index; // 0x0
	};
}
