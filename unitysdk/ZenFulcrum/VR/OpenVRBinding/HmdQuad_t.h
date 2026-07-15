#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector3_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdQuad_t_TypeDefinitionIndex = 37117;

	struct alignas(4) HmdQuad_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vCorners0; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vCorners1; // 0x1C
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vCorners2; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vCorners3; // 0x34
	};
}
