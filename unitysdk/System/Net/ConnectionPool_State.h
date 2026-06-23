#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int ConnectionPool_State_TypeDefinitionIndex = 3409;

	enum class ConnectionPool_State : ::System::Int32
	{
		Initializing = 0,
		Running = 1,
		ShuttingDown = 2,
	};
}
