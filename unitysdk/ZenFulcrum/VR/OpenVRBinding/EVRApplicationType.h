#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRApplicationType_TypeDefinitionIndex = 37078;

	enum class EVRApplicationType : ::System::Int32
	{
		VRApplication_Other = 0,
		VRApplication_Scene = 1,
		VRApplication_Overlay = 2,
		VRApplication_Background = 3,
		VRApplication_Utility = 4,
		VRApplication_VRMonitor = 5,
		VRApplication_SteamWatchdog = 6,
		VRApplication_Bootstrapper = 7,
		VRApplication_Max = 8,
	};
}
