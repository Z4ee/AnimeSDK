#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int UnionFloatUInt_TypeDefinitionIndex = 91266;

	struct alignas(1) UnionFloatUInt
	{
		::System::Single f; // 0x10
		::System::UInt32 u32; // 0x10
	};
}
