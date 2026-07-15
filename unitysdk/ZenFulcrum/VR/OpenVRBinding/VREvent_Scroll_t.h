#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Scroll_t_TypeDefinitionIndex = 37128;

	struct alignas(4) VREvent_Scroll_t
	{
		::System::Single xdelta; // 0x10
		::System::Single ydelta; // 0x14
		::System::UInt32 repeatCount; // 0x18
	};
}
