#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputTrackingState_TypeDefinitionIndex = 27641;

	enum class InputTrackingState : ::System::UInt32
	{
		None = 0x0,
		Position = 0x1,
		Rotation = 0x2,
		Velocity = 0x4,
		AngularVelocity = 0x8,
		Acceleration = 0x10,
		AngularAcceleration = 0x20,
		All = 0x3F,
	};
}
