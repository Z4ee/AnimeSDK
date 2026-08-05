#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagResult_TypeDefinitionIndex = 28405;

	enum class PropertyBagResult : ::System::Byte
	{
		Success = 0x0,
		TypeMismatch = 0x1,
		OutOfBounds = 0x2,
		PropertyNotFound = 0x3,
	};
}
