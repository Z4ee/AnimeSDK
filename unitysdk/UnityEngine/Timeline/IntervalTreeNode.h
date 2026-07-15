#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IntervalTreeNode_TypeDefinitionIndex = 36663;

	struct alignas(8) IntervalTreeNode
	{
		::System::Int64 center; // 0x10
		::System::Int32 first; // 0x18
		::System::Int32 last; // 0x1C
		::System::Int32 left; // 0x20
		::System::Int32 right; // 0x24
	};
}
