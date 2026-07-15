#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ErrorType_TypeDefinitionIndex = 5922;

	enum class ErrorType : ::System::Int32
	{
		Unknown = 0,
		IncompleteMessage = 1,
		DuplicateObjectKeys = 2,
		InvalidOrUnexpectedCharacter = 3,
	};
}
