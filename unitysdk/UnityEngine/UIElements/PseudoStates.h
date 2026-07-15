#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PseudoStates_TypeDefinitionIndex = 6158;

	enum class PseudoStates : ::System::Int32
	{
		Active = 1,
		Hover = 2,
		Checked = 8,
		Disabled = 32,
		Focus = 64,
		Root = 128,
	};
}
