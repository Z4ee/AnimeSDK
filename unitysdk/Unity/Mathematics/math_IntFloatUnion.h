#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Mathematics
{
	inline static constexpr unsigned int math_IntFloatUnion_TypeDefinitionIndex = 32109;

	struct alignas(4) math_IntFloatUnion
	{
		::System::Int32 intValue; // 0x10
		::System::Single floatValue; // 0x10
	};
}
