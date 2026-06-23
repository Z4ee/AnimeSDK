#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int TextOverflowModes_TypeDefinitionIndex = 39208;

	enum class TextOverflowModes : ::System::Int32
	{
		Overflow = 0,
		Ellipsis = 1,
		Masking = 2,
		Truncate = 3,
		ScrollRect = 4,
		Page = 5,
		Linked = 6,
	};
}
