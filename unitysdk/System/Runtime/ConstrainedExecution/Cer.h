#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int Cer_TypeDefinitionIndex = 1336;

	enum class Cer : ::System::Int32
	{
		None = 0,
		MayFail = 1,
		Success = 2,
	};
}
