#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int StringComparison_TypeDefinitionIndex = 423;

	enum class StringComparison : ::System::Int32
	{
		CurrentCulture = 0,
		CurrentCultureIgnoreCase = 1,
		InvariantCulture = 2,
		InvariantCultureIgnoreCase = 3,
		Ordinal = 4,
		OrdinalIgnoreCase = 5,
	};
}
