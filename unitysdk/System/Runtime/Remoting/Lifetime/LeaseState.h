#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LeaseState_TypeDefinitionIndex = 1237;

	enum class LeaseState : ::System::Int32
	{
		Null = 0,
		Initial = 1,
		Active = 2,
		Renewing = 3,
		Expired = 4,
	};
}
