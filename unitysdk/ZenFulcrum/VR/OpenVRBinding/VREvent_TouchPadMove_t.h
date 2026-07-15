#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_TouchPadMove_t_TypeDefinitionIndex = 37129;

	struct alignas(4) VREvent_TouchPadMove_t
	{
		::System::Boolean bFingerDown; // 0x10
		::System::Single flSecondsFingerDown; // 0x14
		::System::Single fValueXFirst; // 0x18
		::System::Single fValueYFirst; // 0x1C
		::System::Single fValueXRaw; // 0x20
		::System::Single fValueYRaw; // 0x24
	};
}
