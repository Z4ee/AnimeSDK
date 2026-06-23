#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int TrackedPoseDriver_TrackingType_TypeDefinitionIndex = 31718;

	enum class TrackedPoseDriver_TrackingType : ::System::Int32
	{
		RotationAndPosition = 0,
		RotationOnly = 1,
		PositionOnly = 2,
	};
}
