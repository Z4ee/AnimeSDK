#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CullingQueryOptions_TypeDefinitionIndex = 5143;

	enum class CullingQueryOptions : ::System::Int32
	{
		Normal = 0,
		IgnoreVisibility = 1,
		IgnoreDistance = 2,
	};
}
