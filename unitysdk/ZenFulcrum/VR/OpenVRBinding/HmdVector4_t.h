#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdVector4_t_TypeDefinitionIndex = 37112;

	struct alignas(4) HmdVector4_t
	{
		::System::Single v0; // 0x10
		::System::Single v1; // 0x14
		::System::Single v2; // 0x18
		::System::Single v3; // 0x1C
	};
}
