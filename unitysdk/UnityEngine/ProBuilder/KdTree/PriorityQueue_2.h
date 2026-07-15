#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/KdTree/ItemPriority_2.h"

namespace UnityEngine::ProBuilder::KdTree { template <typename T> class ITypeMath_1; }

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int PriorityQueue_2_TypeDefinitionIndex = 36573;

	template <typename TItem, typename TPriority>
	class PriorityQueue_2 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath; // 0x0
		::Il2CppArray<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>* queue; // 0x0
		::System::Int32 capacity; // 0x0
		::System::Int32 count; // 0x0
	};
}
