#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventFieldFormat_TypeDefinitionIndex = 1593;

	enum class EventFieldFormat : ::System::Int32
	{
		Default = 0,
		String = 2,
		Boolean = 3,
		Hexadecimal = 4,
		Xml = 11,
		Json = 12,
		HResult = 15,
	};
}
