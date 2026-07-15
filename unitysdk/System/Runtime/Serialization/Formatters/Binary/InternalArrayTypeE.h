#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalArrayTypeE_TypeDefinitionIndex = 1166;

	enum class InternalArrayTypeE : ::System::Int32
	{
		Empty = 0,
		Single = 1,
		Jagged = 2,
		Rectangular = 3,
		Base64 = 4,
	};
}
