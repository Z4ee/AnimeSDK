#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Diagnostics
{
	inline static constexpr unsigned int ForcedCrashCategory_TypeDefinitionIndex = 4910;

	enum class ForcedCrashCategory : ::System::Int32
	{
		AccessViolation = 0,
		FatalError = 1,
		Abort = 2,
		PureVirtualFunction = 3,
	};
}
