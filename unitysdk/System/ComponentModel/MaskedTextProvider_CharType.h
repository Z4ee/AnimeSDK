#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int MaskedTextProvider_CharType_TypeDefinitionIndex = 2946;

	enum class MaskedTextProvider_CharType : ::System::Int32
	{
		EditOptional = 1,
		EditRequired = 2,
		Separator = 4,
		Literal = 8,
		Modifier = 16,
	};
}
