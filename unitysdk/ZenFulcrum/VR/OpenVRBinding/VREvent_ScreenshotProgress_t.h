#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_ScreenshotProgress_t_TypeDefinitionIndex = 37141;

	struct alignas(4) VREvent_ScreenshotProgress_t
	{
		::System::Single progress; // 0x10
	};
}
