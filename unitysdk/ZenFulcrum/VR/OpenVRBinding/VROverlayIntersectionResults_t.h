#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector3_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VROverlayIntersectionResults_t_TypeDefinitionIndex = 37158;

	struct alignas(4) VROverlayIntersectionResults_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vPoint; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vNormal; // 0x1C
		::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t vUVs; // 0x28
		::System::Single fDistance; // 0x30
	};
}
