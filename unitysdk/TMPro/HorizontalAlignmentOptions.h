#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int HorizontalAlignmentOptions_TypeDefinitionIndex = 41842;

	enum class HorizontalAlignmentOptions : ::System::Int32
	{
		Left = 1,
		Center = 2,
		Right = 4,
		Justified = 8,
		Flush = 16,
		Geometry = 32,
	};
}
