#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventBase_EventPropagation_TypeDefinitionIndex = 6189;

	enum class EventBase_EventPropagation : ::System::Int32
	{
		None = 0,
		Bubbles = 1,
		TricklesDown = 2,
		Cancellable = 4,
	};
}
