#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int WaterSettings_TypeDefinitionIndex = 4835;

	struct alignas(4) WaterSettings
	{
		::System::Boolean EnableReflection; // 0x10
		::System::Boolean EnableRefraction; // 0x11
		::System::Single RenderScale; // 0x14
		::System::Int32 NumSteps; // 0x18
		::System::Single Thickness; // 0x1C
		::System::Single MarchingDistance; // 0x20
		::System::Boolean UsePreviousFrameColor; // 0x24
		::System::Boolean EnableSpatialFilter; // 0x25
		::System::Boolean EnableTemporalFilter; // 0x26
		::System::Boolean HiZEarlyExit; // 0x27
	};
}
