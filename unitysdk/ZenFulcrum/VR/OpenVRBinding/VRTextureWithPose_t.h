#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VRTextureWithPose_t_TypeDefinitionIndex = 37123;

	struct alignas(4) VRTextureWithPose_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t mDeviceToAbsoluteTracking; // 0x10
	};
}
