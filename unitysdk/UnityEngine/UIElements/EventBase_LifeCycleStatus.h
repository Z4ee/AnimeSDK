#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventBase_LifeCycleStatus_TypeDefinitionIndex = 6190;

	enum class EventBase_LifeCycleStatus : ::System::Int32
	{
		None = 0,
		PropagationStopped = 1,
		ImmediatePropagationStopped = 2,
		DefaultPrevented = 4,
		Dispatching = 8,
		Pooled = 16,
		IMGUIEventIsValid = 32,
		StopDispatch = 64,
		PropagateToIMGUI = 128,
		Dispatched = 512,
		Processed = 1024,
	};
}
