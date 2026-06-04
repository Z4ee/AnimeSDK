#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters
{
	inline static constexpr unsigned int TypeFilterLevel_TypeDefinitionIndex = 1133;

	enum class TypeFilterLevel : ::System::Int32
	{
		Low = 2,
		Full = 3,
	};
}
