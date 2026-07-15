#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int StringPoolHash_TypeDefinitionIndex = 4335;

	struct alignas(4) StringPoolHash
	{
		::System::UInt32 hashValue; // 0x10
	};
}
