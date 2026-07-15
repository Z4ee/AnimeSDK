#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int ValueTaskSourceStatus_TypeDefinitionIndex = 7056;

	enum class ValueTaskSourceStatus : ::System::Int32
	{
		Pending = 0,
		Succeeded = 1,
		Faulted = 2,
		Canceled = 3,
	};
}
