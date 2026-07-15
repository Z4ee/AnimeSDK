#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Security
{
	inline static constexpr unsigned int AuthenticationLevel_TypeDefinitionIndex = 2916;

	enum class AuthenticationLevel : ::System::Int32
	{
		None = 0,
		MutualAuthRequested = 1,
		MutualAuthRequired = 2,
	};
}
