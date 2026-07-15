#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int AppOverrideKeys_t_TypeDefinitionIndex = 37154;

	struct alignas(8) AppOverrideKeys_t
	{
		::System::IntPtr pchKey; // 0x10
		::System::IntPtr pchValue; // 0x18
	};
}
