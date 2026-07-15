#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexOptions_TypeDefinitionIndex = 2517;

	enum class RegexOptions : ::System::Int32
	{
		None = 0,
		IgnoreCase = 1,
		Multiline = 2,
		ExplicitCapture = 4,
		Compiled = 8,
		Singleline = 16,
		IgnorePatternWhitespace = 32,
		RightToLeft = 64,
		ECMAScript = 256,
		CultureInvariant = 512,
	};
}
