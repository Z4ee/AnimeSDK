#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Notification_t_TypeDefinitionIndex = 37130;

	struct alignas(8) VREvent_Notification_t
	{
		::System::UInt64 ulUserValue; // 0x10
		::System::UInt32 notificationId; // 0x18
	};
}
