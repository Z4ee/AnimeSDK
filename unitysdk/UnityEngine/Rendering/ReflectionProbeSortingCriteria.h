#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeSortingCriteria_TypeDefinitionIndex = 4746;

	enum class ReflectionProbeSortingCriteria : ::System::Int32
	{
		None = 0,
		Importance = 1,
		Size = 2,
		ImportanceThenSize = 3,
	};
}
