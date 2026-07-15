#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdVector2_t_TypeDefinitionIndex = 37114;

	struct alignas(4) HmdVector2_t
	{
		::System::Single v0; // 0x10
		::System::Single v1; // 0x14
	};
}
