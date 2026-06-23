#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DebugViewWriter_Flow_TypeDefinitionIndex = 4455;

	enum class DebugViewWriter_Flow : ::System::Int32
	{
		None = 0,
		Space = 1,
		NewLine = 2,
		Break = 32768,
	};
}
