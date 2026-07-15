#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int AddDuplicateBehavior_TypeDefinitionIndex = 36564;

	enum class AddDuplicateBehavior : ::System::Int32
	{
		Skip = 0,
		Error = 1,
		Update = 2,
		Collect = 3,
	};
}
