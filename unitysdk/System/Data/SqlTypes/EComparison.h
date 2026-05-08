#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int EComparison_TypeDefinitionIndex = 37110;

	enum class EComparison : ::System::Int32
	{
		LT = 0,
		LE = 1,
		EQ = 2,
		GE = 3,
		GT = 4,
		NE = 5,
	};
}
