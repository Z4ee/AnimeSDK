#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Numerics
{
	inline static constexpr unsigned int DoubleUlong_TypeDefinitionIndex = 3834;

	struct alignas(8) DoubleUlong
	{
		::System::Double dbl; // 0x10
		::System::UInt64 uu; // 0x10
	};
}
