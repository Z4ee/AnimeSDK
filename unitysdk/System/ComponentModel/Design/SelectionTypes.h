#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int SelectionTypes_TypeDefinitionIndex = 3087;

	enum class SelectionTypes : ::System::Int32
	{
		Auto = 1,
		Normal = 1,
		Replace = 2,
		MouseDown = 4,
		MouseUp = 8,
		Click = 16,
		Primary = 16,
		Toggle = 32,
		Add = 64,
		Remove = 128,
		Valid = 31,
	};
}
