#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int DistortionCoordinates_t_TypeDefinitionIndex = 37119;

	struct alignas(4) DistortionCoordinates_t
	{
		::System::Single rfRed0; // 0x10
		::System::Single rfRed1; // 0x14
		::System::Single rfGreen0; // 0x18
		::System::Single rfGreen1; // 0x1C
		::System::Single rfBlue0; // 0x20
		::System::Single rfBlue1; // 0x24
	};
}
