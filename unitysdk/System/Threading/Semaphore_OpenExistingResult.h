#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int Semaphore_OpenExistingResult_TypeDefinitionIndex = 2710;

	enum class Semaphore_OpenExistingResult : ::System::Int32
	{
		Success = 0,
		NameNotFound = 1,
		PathNotFound = 2,
		NameInvalid = 3,
	};
}
