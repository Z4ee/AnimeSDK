#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Option_TypeDefinitionIndex = 6979;

	enum class Option : ::System::Int32
	{
		ArrayBoundsChecks = 2,
		DivideByZeroChecks = 3,
		NullChecks = 1,
	};
}
