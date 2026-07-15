#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters
{
	inline static constexpr unsigned int FormatterTypeStyle_TypeDefinitionIndex = 1133;

	enum class FormatterTypeStyle : ::System::Int32
	{
		TypesWhenNeeded = 0,
		TypesAlways = 1,
		XsdString = 2,
	};
}
