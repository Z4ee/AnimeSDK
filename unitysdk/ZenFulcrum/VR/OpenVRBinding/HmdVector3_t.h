#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdVector3_t_TypeDefinitionIndex = 37111;

	struct alignas(4) HmdVector3_t
	{
		::System::Single v0; // 0x10
		::System::Single v1; // 0x14
		::System::Single v2; // 0x18
	};
}
