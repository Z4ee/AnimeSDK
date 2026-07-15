#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryTypeEnum_TypeDefinitionIndex = 1160;

	enum class BinaryTypeEnum : ::System::Int32
	{
		Primitive = 0,
		String = 1,
		Object = 2,
		ObjectUrt = 3,
		ObjectUser = 4,
		ObjectArray = 5,
		StringArray = 6,
		PrimitiveArray = 7,
	};
}
