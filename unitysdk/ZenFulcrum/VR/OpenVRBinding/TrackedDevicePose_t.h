#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingResult.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector3_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int TrackedDevicePose_t_TypeDefinitionIndex = 37121;

	struct alignas(4) TrackedDevicePose_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t mDeviceToAbsoluteTracking; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vVelocity; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vAngularVelocity; // 0x4C
		::ZenFulcrum::VR::OpenVRBinding::ETrackingResult eTrackingResult; // 0x58
		::System::Boolean bPoseIsValid; // 0x5C
		::System::Boolean bDeviceIsConnected; // 0x5D
	};
}
