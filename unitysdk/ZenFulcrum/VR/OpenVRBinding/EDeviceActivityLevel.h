#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EDeviceActivityLevel_TypeDefinitionIndex = 37070;

	enum class EDeviceActivityLevel : ::System::Int32
	{
		k_EDeviceActivityLevel_Unknown = -1,
		k_EDeviceActivityLevel_Idle = 0,
		k_EDeviceActivityLevel_UserInteraction = 1,
		k_EDeviceActivityLevel_UserInteraction_Timeout = 2,
		k_EDeviceActivityLevel_Standby = 3,
	};
}
