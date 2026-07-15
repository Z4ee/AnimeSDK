#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VRTextureBounds_t_TypeDefinitionIndex = 37122;

	struct alignas(4) VRTextureBounds_t
	{
		::System::Single uMin; // 0x10
		::System::Single vMin; // 0x14
		::System::Single uMax; // 0x18
		::System::Single vMax; // 0x1C
	};
}
