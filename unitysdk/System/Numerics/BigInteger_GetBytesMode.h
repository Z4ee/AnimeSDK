#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Numerics
{
	inline static constexpr unsigned int BigInteger_GetBytesMode_TypeDefinitionIndex = 3827;

	enum class BigInteger_GetBytesMode : ::System::Int32
	{
		AllocateArray = 0,
		Count = 1,
		Span = 2,
	};
}
