#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ValueFixupEnum_TypeDefinitionIndex = 1171;

	enum class ValueFixupEnum : ::System::Int32
	{
		Empty = 0,
		Array = 1,
		Header = 2,
		Member = 3,
	};
}
