#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Status_t_TypeDefinitionIndex = 36351;

	struct alignas(4) VREvent_Status_t
	{
		::System::UInt32 statusState; // 0x10
	};
}
