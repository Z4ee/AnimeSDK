#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalMemberTypeE_TypeDefinitionIndex = 1167;

	enum class InternalMemberTypeE : ::System::Int32
	{
		Empty = 0,
		Header = 1,
		Field = 2,
		Item = 3,
	};
}
