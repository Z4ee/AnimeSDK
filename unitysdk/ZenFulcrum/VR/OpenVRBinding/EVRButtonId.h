#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRButtonId_TypeDefinitionIndex = 37071;

	enum class EVRButtonId : ::System::Int32
	{
		k_EButton_System = 0,
		k_EButton_ApplicationMenu = 1,
		k_EButton_Grip = 2,
		k_EButton_DPad_Left = 3,
		k_EButton_DPad_Up = 4,
		k_EButton_DPad_Right = 5,
		k_EButton_DPad_Down = 6,
		k_EButton_A = 7,
		k_EButton_ProximitySensor = 31,
		k_EButton_Axis0 = 32,
		k_EButton_Axis1 = 33,
		k_EButton_Axis2 = 34,
		k_EButton_Axis3 = 35,
		k_EButton_Axis4 = 36,
		k_EButton_SteamVR_Touchpad = 32,
		k_EButton_SteamVR_Trigger = 33,
		k_EButton_Dashboard_Back = 2,
		k_EButton_Max = 64,
	};
}
