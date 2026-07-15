#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutOption_Type_TypeDefinitionIndex = 5223;

	enum class GUILayoutOption_Type : ::System::Int32
	{
		fixedWidth = 0,
		fixedHeight = 1,
		minWidth = 2,
		maxWidth = 3,
		minHeight = 4,
		maxHeight = 5,
		stretchWidth = 6,
		stretchHeight = 7,
		alignStart = 8,
		alignMiddle = 9,
		alignEnd = 10,
		alignJustify = 11,
		equalSize = 12,
		spacing = 13,
	};
}
