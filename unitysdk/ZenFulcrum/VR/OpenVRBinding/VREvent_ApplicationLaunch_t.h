#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_ApplicationLaunch_t_TypeDefinitionIndex = 38001;

	struct alignas(4) VREvent_ApplicationLaunch_t
	{
		::System::UInt32 pid; // 0x10
		::System::UInt32 unArgsHandle; // 0x14
	};
}
