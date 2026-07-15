#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayIntersectionMaskPrimitiveType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionMaskPrimitive_Data_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VROverlayIntersectionMaskPrimitive_t_TypeDefinitionIndex = 37161;

	struct alignas(4) VROverlayIntersectionMaskPrimitive_t
	{
		::ZenFulcrum::VR::OpenVRBinding::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive; // 0x14
	};
}
