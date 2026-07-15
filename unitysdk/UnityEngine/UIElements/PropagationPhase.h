#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PropagationPhase_TypeDefinitionIndex = 6204;

	enum class PropagationPhase : ::System::Int32
	{
		None = 0,
		TrickleDown = 1,
		AtTarget = 2,
		DefaultActionAtTarget = 5,
		BubbleUp = 3,
		DefaultAction = 4,
	};
}
