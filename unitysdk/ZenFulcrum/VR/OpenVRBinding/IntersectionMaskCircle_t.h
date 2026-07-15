#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IntersectionMaskCircle_t_TypeDefinitionIndex = 37160;

	struct alignas(4) IntersectionMaskCircle_t
	{
		::System::Single m_flCenterX; // 0x10
		::System::Single m_flCenterY; // 0x14
		::System::Single m_flRadius; // 0x18
	};
}
