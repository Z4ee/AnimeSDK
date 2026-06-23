#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int TokenBindingType_TypeDefinitionIndex = 3151;

	enum class TokenBindingType : ::System::Int32
	{
		Provided = 0,
		Referred = 1,
	};
}
