#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelectorType_TypeDefinitionIndex = 27601;

	enum class StyleSelectorType : ::System::Int32
	{
		Unknown = 0,
		Wildcard = 1,
		Type = 2,
		Class = 3,
		PseudoClass = 4,
		RecursivePseudoClass = 5,
		ID = 6,
		Predicate = 7,
	};
}
