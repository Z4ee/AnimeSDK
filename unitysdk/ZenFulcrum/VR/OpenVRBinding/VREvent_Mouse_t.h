#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Mouse_t_TypeDefinitionIndex = 37127;

	struct alignas(4) VREvent_Mouse_t
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::UInt32 button; // 0x18
	};
}
