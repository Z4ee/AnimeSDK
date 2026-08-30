#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int MidpointRounding_TypeDefinitionIndex = 298;

	enum class MidpointRounding : ::System::Int32
	{
		ToEven = 0,
		AwayFromZero = 1,
	};
}
