#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int PivotLocation_TypeDefinitionIndex = 40811;

	enum class PivotLocation : ::System::Int32
	{
		Center = 0,
		FirstCorner = 1,
	};
}
