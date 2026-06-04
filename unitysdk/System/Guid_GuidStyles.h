#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int Guid_GuidStyles_TypeDefinitionIndex = 268;

	enum class Guid_GuidStyles : ::System::Int32
	{
		None = 0,
		AllowParenthesis = 1,
		AllowBraces = 2,
		AllowDashes = 4,
		AllowHexPrefix = 8,
		RequireParenthesis = 16,
		RequireBraces = 32,
		RequireDashes = 64,
		RequireHexPrefix = 128,
		HexFormat = 160,
		NumberFormat = 0,
		DigitFormat = 64,
		BraceFormat = 96,
		ParenthesisFormat = 80,
		Any = 15,
	};
}
