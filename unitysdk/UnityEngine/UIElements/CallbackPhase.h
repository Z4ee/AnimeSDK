#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CallbackPhase_TypeDefinitionIndex = 5926;

	enum class CallbackPhase : ::System::Int32
	{
		TargetAndBubbleUp = 1,
		TrickleDownAndTarget = 2,
	};
}
