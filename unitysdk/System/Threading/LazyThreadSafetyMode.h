#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int LazyThreadSafetyMode_TypeDefinitionIndex = 803;

	enum class LazyThreadSafetyMode : ::System::Int32
	{
		None = 0,
		PublicationOnly = 1,
		ExecutionAndPublication = 2,
	};
}
