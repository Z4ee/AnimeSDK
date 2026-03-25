#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int EUpdateSource_TypeDefinitionIndex = 5027;

	enum class EUpdateSource : ::System::Int32
	{
		NotUpdate = 0,
		UpdateWithDelta = 1,
		BatchUpdate = 2,
		UpdateWhenBecomeVisible = 4,
	};
}
