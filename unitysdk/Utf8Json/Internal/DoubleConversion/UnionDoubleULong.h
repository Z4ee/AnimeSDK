#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int UnionDoubleULong_TypeDefinitionIndex = 91265;

	struct alignas(1) UnionDoubleULong
	{
		::System::Double d; // 0x10
		::System::UInt64 u64; // 0x10
	};
}
