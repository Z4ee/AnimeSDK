#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlCompareOptions_TypeDefinitionIndex = 38725;

	enum class SqlCompareOptions : ::System::Int32
	{
		None = 0,
		IgnoreCase = 1,
		IgnoreNonSpace = 2,
		IgnoreKanaType = 8,
		IgnoreWidth = 16,
		BinarySort = 32768,
		BinarySort2 = 16384,
	};
}
