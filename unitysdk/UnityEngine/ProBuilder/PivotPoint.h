#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int PivotPoint_TypeDefinitionIndex = 41579;

	enum class PivotPoint : ::System::Int32
	{
		Center = 0,
		IndividualOrigins = 1,
		ActiveElement = 2,
	};
}
