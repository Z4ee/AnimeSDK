#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionModifierBehavior_TypeDefinitionIndex = 41614;

	enum class SelectionModifierBehavior : ::System::Int32
	{
		Add = 0,
		Subtract = 1,
		Difference = 2,
	};
}
