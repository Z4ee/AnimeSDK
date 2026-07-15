#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int WindingOrder_TypeDefinitionIndex = 41592;

	enum class WindingOrder : ::System::Int32
	{
		Unknown = 0,
		Clockwise = 1,
		CounterClockwise = 2,
	};
}
