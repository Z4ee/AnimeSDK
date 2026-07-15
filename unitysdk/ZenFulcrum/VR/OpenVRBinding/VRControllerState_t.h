#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerAxis_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VRControllerState_t_TypeDefinitionIndex = 37150;

	struct alignas(8) VRControllerState_t
	{
		::System::UInt32 unPacketNum; // 0x10
		::System::UInt64 ulButtonPressed; // 0x18
		::System::UInt64 ulButtonTouched; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis0; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis1; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis2; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis3; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis4; // 0x48
	};
}
