#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_MessageOverlay_t_TypeDefinitionIndex = 37144;

	struct alignas(4) VREvent_MessageOverlay_t
	{
		::System::UInt32 unVRMessageOverlayResponse; // 0x10
	};
}
