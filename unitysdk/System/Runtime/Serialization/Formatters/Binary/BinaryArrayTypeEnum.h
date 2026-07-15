#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryArrayTypeEnum_TypeDefinitionIndex = 1161;

	enum class BinaryArrayTypeEnum : ::System::Int32
	{
		Single = 0,
		Jagged = 1,
		Rectangular = 2,
		SingleOffset = 3,
		JaggedOffset = 4,
		RectangularOffset = 5,
	};
}
