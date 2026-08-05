#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureDispatchingStrategy_EventBehavior_TypeDefinitionIndex = 28132;

	enum class MouseCaptureDispatchingStrategy_EventBehavior : ::System::Int32
	{
		None = 0,
		IsCapturable = 1,
		IsSentExclusivelyToCapturingElement = 2,
	};
}
