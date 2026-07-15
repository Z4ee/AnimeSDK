#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int ItemPriority_2_TypeDefinitionIndex = 36572;

	template <typename TItem, typename TPriority>
	struct ItemPriority_2
	{
		TItem Item; // 0x0
		TPriority Priority; // 0x0
	};
}
