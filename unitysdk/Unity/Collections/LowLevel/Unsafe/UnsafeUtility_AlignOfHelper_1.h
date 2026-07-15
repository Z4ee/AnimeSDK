#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeUtility_AlignOfHelper_1_TypeDefinitionIndex = 3998;

	template <typename T>
	struct UnsafeUtility_AlignOfHelper_1
	{
		::System::Byte dummy; // 0x0
		T data; // 0x0
	};
}
