#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaSize_TypeDefinitionIndex = 6128;

	struct alignas(4) YogaSize
	{
		::System::Single width; // 0x10
		::System::Single height; // 0x14
	};
}
