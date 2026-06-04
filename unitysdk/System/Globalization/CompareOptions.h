#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CompareOptions_TypeDefinitionIndex = 733;

	enum class CompareOptions : ::System::Int32
	{
		None = 0,
		IgnoreCase = 1,
		IgnoreNonSpace = 2,
		IgnoreSymbols = 4,
		IgnoreKanaType = 8,
		IgnoreWidth = 16,
		OrdinalIgnoreCase = 268435456,
		StringSort = 536870912,
		Ordinal = 1073741824,
	};
}
