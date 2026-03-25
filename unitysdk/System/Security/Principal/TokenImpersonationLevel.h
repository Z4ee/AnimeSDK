#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Principal
{
	inline static constexpr unsigned int TokenImpersonationLevel_TypeDefinitionIndex = 979;

	enum class TokenImpersonationLevel : ::System::Int32
	{
		Anonymous = 1,
		Delegation = 4,
		Identification = 2,
		Impersonation = 3,
		None = 0,
	};
}
