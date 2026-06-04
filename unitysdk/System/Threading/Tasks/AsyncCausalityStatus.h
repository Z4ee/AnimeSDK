#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AsyncCausalityStatus_TypeDefinitionIndex = 881;

	enum class AsyncCausalityStatus : ::System::Int32
	{
		Started = 0,
		Completed = 1,
		Canceled = 2,
		Error = 3,
	};
}
