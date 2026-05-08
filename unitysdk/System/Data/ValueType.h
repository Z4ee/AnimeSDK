#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 37017;

	enum class ValueType : ::System::Int32
	{
		Unknown = -1,
		Null = 0,
		Bool = 1,
		Numeric = 2,
		Str = 3,
		Float = 4,
		Decimal = 5,
		Object = 6,
		Date = 7,
	};
}
