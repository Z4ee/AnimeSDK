#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyTabScope_TypeDefinitionIndex = 3021;

	enum class PropertyTabScope : ::System::Int32
	{
		Static = 0,
		Global = 1,
		Document = 2,
		Component = 3,
	};
}
