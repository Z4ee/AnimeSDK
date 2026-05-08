#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelectorRelationship_TypeDefinitionIndex = 25097;

	enum class StyleSelectorRelationship : ::System::Int32
	{
		None = 0,
		Child = 1,
		Descendent = 2,
	};
}
