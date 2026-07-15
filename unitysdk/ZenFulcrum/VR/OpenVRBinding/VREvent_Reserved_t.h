#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Reserved_t_TypeDefinitionIndex = 37137;

	struct alignas(8) VREvent_Reserved_t
	{
		::System::UInt64 reserved0; // 0x10
		::System::UInt64 reserved1; // 0x18
	};
}
