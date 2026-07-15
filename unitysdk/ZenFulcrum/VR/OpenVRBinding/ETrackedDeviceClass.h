#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int ETrackedDeviceClass_TypeDefinitionIndex = 37062;

	enum class ETrackedDeviceClass : ::System::Int32
	{
		Invalid = 0,
		HMD = 1,
		Controller = 2,
		GenericTracker = 3,
		TrackingReference = 4,
		DisplayRedirect = 5,
	};
}
