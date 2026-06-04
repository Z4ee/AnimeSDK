#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security
{
	inline static constexpr unsigned int PolicyLevelType_TypeDefinitionIndex = 940;

	enum class PolicyLevelType : ::System::Int32
	{
		User = 0,
		Machine = 1,
		Enterprise = 2,
		AppDomain = 3,
	};
}
