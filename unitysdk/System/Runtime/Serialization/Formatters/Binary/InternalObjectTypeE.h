#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalObjectTypeE_TypeDefinitionIndex = 1164;

	enum class InternalObjectTypeE : ::System::Int32
	{
		Empty = 0,
		Object = 1,
		Array = 2,
	};
}
