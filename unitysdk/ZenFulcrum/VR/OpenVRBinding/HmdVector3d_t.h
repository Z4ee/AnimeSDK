#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdVector3d_t_TypeDefinitionIndex = 37113;

	struct alignas(8) HmdVector3d_t
	{
		::System::Double v0; // 0x10
		::System::Double v1; // 0x18
		::System::Double v2; // 0x20
	};
}
