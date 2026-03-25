#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CausalitySynchronousWork_TypeDefinitionIndex = 882;

	enum class CausalitySynchronousWork : ::System::Int32
	{
		CompletionNotification = 0,
		ProgressNotification = 1,
		Execution = 2,
	};
}
