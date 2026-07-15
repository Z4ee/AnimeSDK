#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRNotifications__CreateNotification; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRNotifications__RemoveNotification; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRNotifications_TypeDefinitionIndex = 37003;

	struct alignas(8) IVRNotifications
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRNotifications__CreateNotification* CreateNotification; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRNotifications__RemoveNotification* RemoveNotification; // 0x18
	};
}
