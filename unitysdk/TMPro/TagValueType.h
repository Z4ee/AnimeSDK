#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int TagValueType_TypeDefinitionIndex = 39848;

	enum class TagValueType : ::System::Int32
	{
		None = 0,
		NumericalValue = 1,
		StringValue = 2,
		ColorValue = 4,
	};
}
