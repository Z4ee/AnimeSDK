#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Option_TypeDefinitionIndex = 6843;

	enum class Option : ::System::Int32
	{
		ArrayBoundsChecks = 2,
		NullChecks = 1,
		DivideByZeroChecks = 3,
	};
}
