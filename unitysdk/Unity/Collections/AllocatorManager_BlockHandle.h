#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_BlockHandle_TypeDefinitionIndex = 18450;

	struct alignas(2) AllocatorManager_BlockHandle
	{
		::System::UInt16 Value; // 0x10
	};
}
