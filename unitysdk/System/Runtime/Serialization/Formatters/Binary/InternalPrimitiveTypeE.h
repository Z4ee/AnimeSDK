#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalPrimitiveTypeE_TypeDefinitionIndex = 1169;

	enum class InternalPrimitiveTypeE : ::System::Int32
	{
		Invalid = 0,
		Boolean = 1,
		Byte = 2,
		Char = 3,
		Currency = 4,
		Decimal = 5,
		Double = 6,
		Int16 = 7,
		Int32 = 8,
		Int64 = 9,
		SByte = 10,
		Single = 11,
		TimeSpan = 12,
		DateTime = 13,
		UInt16 = 14,
		UInt32 = 15,
		UInt64 = 16,
		Null = 17,
		String = 18,
	};
}
