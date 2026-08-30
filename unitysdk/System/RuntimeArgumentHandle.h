#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int RuntimeArgumentHandle_TypeDefinitionIndex = 421;

	struct alignas(8) RuntimeArgumentHandle
	{
		::System::IntPtr args; // 0x10
	};
}
