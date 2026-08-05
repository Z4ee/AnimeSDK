#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRNode_TypeDefinitionIndex = 28237;

	enum class XRNode : ::System::Int32
	{
		LeftEye = 0,
		RightEye = 1,
		CenterEye = 2,
		Head = 3,
		LeftHand = 4,
		RightHand = 5,
		GameController = 6,
		TrackingReference = 7,
		HardwareTracker = 8,
	};
}
