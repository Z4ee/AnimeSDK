#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VRControllerAxis_t_TypeDefinitionIndex = 36067;

	struct alignas(4) VRControllerAxis_t
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
	};
}
