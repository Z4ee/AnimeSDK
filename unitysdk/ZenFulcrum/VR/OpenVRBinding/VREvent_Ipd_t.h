#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Ipd_t_TypeDefinitionIndex = 30333;

	struct alignas(4) VREvent_Ipd_t
	{
		::System::Single ipdMeters; // 0x10
	};
}
