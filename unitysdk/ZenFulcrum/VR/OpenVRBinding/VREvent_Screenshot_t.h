#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Screenshot_t_TypeDefinitionIndex = 37140;

	struct alignas(4) VREvent_Screenshot_t
	{
		::System::UInt32 handle; // 0x10
		::System::UInt32 type; // 0x14
	};
}
