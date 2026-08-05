#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputDevice_DeviceFlags_TypeDefinitionIndex = 32249;

	enum class InputDevice_DeviceFlags : ::System::Int32
	{
		UpdateBeforeRender = 1,
		HasStateCallbacks = 2,
		HasControlsWithDefaultState = 4,
		HasDontResetControls = 1024,
		HasEventMerger = 8192,
		HasEventPreProcessor = 16384,
		Remote = 8,
		Native = 16,
		DisabledInFrontend = 32,
		DisabledInRuntime = 128,
		DisabledWhileInBackground = 256,
		DisabledStateHasBeenQueriedFromRuntime = 64,
		CanRunInBackground = 2048,
		CanRunInBackgroundHasBeenQueried = 4096,
	};
}
