#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventChannel_TypeDefinitionIndex = 1708;

	enum class EventChannel : ::System::Byte
	{
		None = 0x0,
		Admin = 0x10,
		Operational = 0x11,
		Analytic = 0x12,
		Debug = 0x13,
	};
}
