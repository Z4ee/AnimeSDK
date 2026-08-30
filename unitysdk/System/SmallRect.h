#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int SmallRect_TypeDefinitionIndex = 459;

	struct alignas(2) SmallRect
	{
		::System::Int16 Left; // 0x10
		::System::Int16 Top; // 0x12
		::System::Int16 Right; // 0x14
		::System::Int16 Bottom; // 0x16
	};
}
