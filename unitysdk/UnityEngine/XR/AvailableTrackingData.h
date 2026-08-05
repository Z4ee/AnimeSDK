#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int AvailableTrackingData_TypeDefinitionIndex = 28238;

	enum class AvailableTrackingData : ::System::Int32
	{
		None = 0,
		PositionAvailable = 1,
		RotationAvailable = 2,
		VelocityAvailable = 4,
		AngularVelocityAvailable = 8,
		AccelerationAvailable = 16,
		AngularAccelerationAvailable = 32,
	};
}
