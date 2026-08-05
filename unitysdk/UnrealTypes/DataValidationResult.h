#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int DataValidationResult_TypeDefinitionIndex = 28361;

	enum class DataValidationResult : ::System::Int32
	{
		Invalid = 0,
		Valid = 1,
		NotValidated = 2,
	};
}
