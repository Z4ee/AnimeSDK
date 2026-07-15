#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int DurationUnit_TypeDefinitionIndex = 5129;

	enum class DurationUnit : ::System::Int32
	{
		Fixed = 0,
		Normalized = 1,
	};
}
