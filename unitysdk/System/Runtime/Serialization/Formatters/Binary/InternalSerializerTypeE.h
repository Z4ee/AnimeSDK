#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalSerializerTypeE_TypeDefinitionIndex = 1162;

	enum class InternalSerializerTypeE : ::System::Int32
	{
		Soap = 1,
		Binary = 2,
	};
}
