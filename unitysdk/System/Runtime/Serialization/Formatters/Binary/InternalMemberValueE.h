#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalMemberValueE_TypeDefinitionIndex = 1168;

	enum class InternalMemberValueE : ::System::Int32
	{
		Empty = 0,
		InlineValue = 1,
		Nested = 2,
		Reference = 3,
		Null = 4,
	};
}
