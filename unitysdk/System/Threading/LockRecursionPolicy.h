#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int LockRecursionPolicy_TypeDefinitionIndex = 3107;

	enum class LockRecursionPolicy : ::System::Int32
	{
		NoRecursion = 0,
		SupportsRecursion = 1,
	};
}
