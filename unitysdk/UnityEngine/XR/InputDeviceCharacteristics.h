#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputDeviceCharacteristics_TypeDefinitionIndex = 28242;

	enum class InputDeviceCharacteristics : ::System::UInt32
	{
		None = 0x0,
		HeadMounted = 0x1,
		Camera = 0x2,
		HeldInHand = 0x4,
		HandTracking = 0x8,
		EyeTracking = 0x10,
		TrackedDevice = 0x20,
		Controller = 0x40,
		TrackingReference = 0x80,
		Left = 0x100,
		Right = 0x200,
		Simulated6DOF = 0x400,
	};
}
