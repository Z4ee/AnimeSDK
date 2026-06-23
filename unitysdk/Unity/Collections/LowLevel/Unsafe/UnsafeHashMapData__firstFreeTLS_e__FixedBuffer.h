#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeHashMapData__firstFreeTLS_e__FixedBuffer_TypeDefinitionIndex = 18470;

	struct alignas(4) UnsafeHashMapData__firstFreeTLS_e__FixedBuffer
	{
		::System::Int32 data[2048]; // 0x0
	};
}
