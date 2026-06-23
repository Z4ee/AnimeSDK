#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AccessControlType_TypeDefinitionIndex = 963;

	enum class AccessControlType : ::System::Int32
	{
		Allow = 0,
		Deny = 1,
	};
}
