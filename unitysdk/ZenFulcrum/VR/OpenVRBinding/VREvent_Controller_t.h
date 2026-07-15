#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Controller_t_TypeDefinitionIndex = 37126;

	struct alignas(4) VREvent_Controller_t
	{
		::System::UInt32 button; // 0x10
	};
}
