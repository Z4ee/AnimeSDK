#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalObjectPositionE_TypeDefinitionIndex = 1165;

	enum class InternalObjectPositionE : ::System::Int32
	{
		Empty = 0,
		Top = 1,
		Child = 2,
		Headers = 3,
	};
}
