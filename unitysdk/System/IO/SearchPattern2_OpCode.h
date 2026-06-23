#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int SearchPattern2_OpCode_TypeDefinitionIndex = 3236;

	enum class SearchPattern2_OpCode : ::System::Int32
	{
		ExactString = 0,
		AnyChar = 1,
		AnyString = 2,
		End = 3,
		True = 4,
	};
}
