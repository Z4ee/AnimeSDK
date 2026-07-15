#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceProperty.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Property_t_TypeDefinitionIndex = 37145;

	struct alignas(8) VREvent_Property_t
	{
		::System::UInt64 container; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop; // 0x18
	};
}
