#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TAASettings_TypeDefinitionIndex = 4824;

	struct alignas(4) TAASettings
	{
		::System::Int32 quality; // 0x10
		::System::Single jitterSpread; // 0x14
		::System::Single sharpness; // 0x18
		::System::Single stationaryBlending; // 0x1C
		::System::Single motionBlending; // 0x20
		::System::Single clampScale; // 0x24
	};
}
