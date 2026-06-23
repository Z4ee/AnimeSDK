#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseUsageMode_TypeDefinitionIndex = 2933;

	enum class LicenseUsageMode : ::System::Int32
	{
		Runtime = 0,
		Designtime = 1,
	};
}
