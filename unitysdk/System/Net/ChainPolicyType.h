#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int ChainPolicyType_TypeDefinitionIndex = 3305;

	enum class ChainPolicyType : ::System::Int32
	{
		Base = 1,
		Authenticode = 2,
		Authenticode_TS = 3,
		SSL = 4,
		BasicConstraints = 5,
		NtAuth = 6,
	};
}
