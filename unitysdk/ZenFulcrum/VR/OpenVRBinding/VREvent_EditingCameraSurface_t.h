#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_EditingCameraSurface_t_TypeDefinitionIndex = 37143;

	struct alignas(8) VREvent_EditingCameraSurface_t
	{
		::System::UInt64 overlayHandle; // 0x10
		::System::UInt32 nVisualMode; // 0x18
	};
}
