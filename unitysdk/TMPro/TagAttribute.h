#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro
{
	inline static constexpr unsigned int TagAttribute_TypeDefinitionIndex = 41886;

	struct alignas(4) TagAttribute
	{
		::System::Int32 startIndex; // 0x10
		::System::Int32 length; // 0x14
		::System::Int32 hashCode; // 0x18
	};
}
