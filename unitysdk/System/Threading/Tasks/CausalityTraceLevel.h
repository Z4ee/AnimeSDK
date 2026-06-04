#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CausalityTraceLevel_TypeDefinitionIndex = 880;

	enum class CausalityTraceLevel : ::System::Int32
	{
		Required = 0,
		Important = 1,
		Verbose = 2,
	};
}
