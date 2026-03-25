#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureDispatchingStrategy_EventBehavior_TypeDefinitionIndex = 5920;

	enum class MouseCaptureDispatchingStrategy_EventBehavior : ::System::Int32
	{
		None = 0,
		IsCapturable = 1,
		IsSentExclusivelyToCapturingElement = 2,
	};
}
