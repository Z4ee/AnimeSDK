#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int DurationUnit_TypeDefinitionIndex = 6625;

	enum class DurationUnit : ::System::Int32
	{
		Fixed = 0,
		Normalized = 1,
	};
}
