#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRNotificationError_TypeDefinitionIndex = 35998;

	enum class EVRNotificationError : ::System::Int32
	{
		OK = 0,
		InvalidNotificationId = 100,
		NotificationQueueFull = 101,
		InvalidOverlayHandle = 102,
		SystemWithUserValueAlreadyExists = 103,
	};
}
