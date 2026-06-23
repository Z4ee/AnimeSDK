#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Option_TypeDefinitionIndex = 6970;

	enum class Option : ::System::Int32
	{
		DivideByZeroChecks = 3,
		NullChecks = 1,
		ArrayBoundsChecks = 2,
	};
}
