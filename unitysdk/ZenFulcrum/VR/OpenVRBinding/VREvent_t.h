#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Data_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_t_TypeDefinitionIndex = 37146;

	struct alignas(8) VREvent_t
	{
		::System::UInt32 eventType; // 0x10
		::System::UInt32 trackedDeviceIndex; // 0x14
		::System::Single eventAgeSeconds; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Data_t data; // 0x20
	};
}
