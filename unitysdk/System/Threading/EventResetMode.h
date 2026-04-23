#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int EventResetMode_TypeDefinitionIndex = 824;

	enum class EventResetMode : ::System::Int32
	{
		AutoReset = 0,
		ManualReset = 1,
	};
}
