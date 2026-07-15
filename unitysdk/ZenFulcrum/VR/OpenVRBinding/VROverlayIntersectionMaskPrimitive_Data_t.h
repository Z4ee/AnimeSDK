#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IntersectionMaskCircle_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IntersectionMaskRectangle_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VROverlayIntersectionMaskPrimitive_Data_t_TypeDefinitionIndex = 37108;

	struct alignas(4) VROverlayIntersectionMaskPrimitive_Data_t
	{
		::ZenFulcrum::VR::OpenVRBinding::IntersectionMaskRectangle_t m_Rectangle; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IntersectionMaskCircle_t m_Circle; // 0x10
	};
}
