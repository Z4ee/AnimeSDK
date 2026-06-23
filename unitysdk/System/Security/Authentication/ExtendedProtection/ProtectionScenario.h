#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ProtectionScenario_TypeDefinitionIndex = 3158;

	enum class ProtectionScenario : ::System::Int32
	{
		TransportSelected = 0,
		TrustedProxy = 1,
	};
}
