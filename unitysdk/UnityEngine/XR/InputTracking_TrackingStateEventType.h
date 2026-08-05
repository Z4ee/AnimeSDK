#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputTracking_TrackingStateEventType_TypeDefinitionIndex = 28236;

	enum class InputTracking_TrackingStateEventType : ::System::Int32
	{
		NodeAdded = 0,
		NodeRemoved = 1,
		TrackingAcquired = 2,
		TrackingLost = 3,
	};
}
