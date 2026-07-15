#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::ProBuilder::KdTree { template <typename T> class ITypeMath_1; }

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int HyperRect_1_TypeDefinitionIndex = 36563;

	template <typename T>
	struct HyperRect_1
	{
		::Il2CppArray<T>* minPoint; // 0x0
		::Il2CppArray<T>* maxPoint; // 0x0
	};
}
