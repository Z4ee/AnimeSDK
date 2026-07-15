#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventActivityOptions_TypeDefinitionIndex = 1671;

	enum class EventActivityOptions : ::System::Int32
	{
		None = 0,
		Disable = 2,
		Recursive = 4,
		Detachable = 8,
	};
}
