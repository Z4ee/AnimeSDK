#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRControllerAxisType_TypeDefinitionIndex = 37074;

	enum class EVRControllerAxisType : ::System::Int32
	{
		k_eControllerAxis_None = 0,
		k_eControllerAxis_TrackPad = 1,
		k_eControllerAxis_Joystick = 2,
		k_eControllerAxis_Trigger = 3,
	};
}
