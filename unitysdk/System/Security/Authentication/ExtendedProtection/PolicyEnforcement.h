#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int PolicyEnforcement_TypeDefinitionIndex = 2666;

	enum class PolicyEnforcement : ::System::Int32
	{
		Never = 0,
		WhenSupported = 1,
		Always = 2,
	};
}
