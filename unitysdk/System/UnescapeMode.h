#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UnescapeMode_TypeDefinitionIndex = 2467;

	enum class UnescapeMode : ::System::Int32
	{
		CopyOnly = 0,
		Escape = 1,
		Unescape = 2,
		EscapeUnescape = 3,
		V1ToStringFlag = 4,
		UnescapeAll = 8,
		UnescapeAllOrThrow = 24,
	};
}
