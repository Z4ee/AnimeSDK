#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterPermissionAccess_TypeDefinitionIndex = 4184;

	enum class PerformanceCounterPermissionAccess : ::System::Int32
	{
		Administer = 7,
		Browse = 1,
		Instrument = 3,
		None = 0,
		Read = 1,
		Write = 2,
	};
}
