#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebExceptionInternalStatus_TypeDefinitionIndex = 3337;

	enum class WebExceptionInternalStatus : ::System::Int32
	{
		RequestFatal = 0,
		ServicePointFatal = 1,
		Recoverable = 2,
		Isolated = 3,
	};
}
