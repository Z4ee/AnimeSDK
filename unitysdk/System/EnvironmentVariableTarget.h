#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int EnvironmentVariableTarget_TypeDefinitionIndex = 397;

	enum class EnvironmentVariableTarget : ::System::Int32
	{
		Process = 0,
		User = 1,
		Machine = 2,
	};
}
