#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Overlay_t_TypeDefinitionIndex = 37132;

	struct alignas(8) VREvent_Overlay_t
	{
		::System::UInt64 overlayHandle; // 0x10
	};
}
