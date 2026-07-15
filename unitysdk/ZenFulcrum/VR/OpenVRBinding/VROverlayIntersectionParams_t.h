#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector3_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VROverlayIntersectionParams_t_TypeDefinitionIndex = 37157;

	struct alignas(4) VROverlayIntersectionParams_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vSource; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vDirection; // 0x1C
		::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin; // 0x28
	};
}
