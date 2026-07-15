#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Token_Type_TypeDefinitionIndex = 3792;

	enum class Token_Type : ::System::Int32
	{
		Error = 0,
		End = 1,
		Token = 2,
		QuotedString = 3,
		SeparatorEqual = 4,
		SeparatorSemicolon = 5,
		SeparatorSlash = 6,
		SeparatorDash = 7,
		SeparatorComma = 8,
		OpenParens = 9,
	};
}
