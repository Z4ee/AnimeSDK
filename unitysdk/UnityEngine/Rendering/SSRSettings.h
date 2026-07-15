#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SSRSettings_TypeDefinitionIndex = 4829;

	struct alignas(4) SSRSettings
	{
		::System::Boolean IsMobile; // 0x10
		::System::Boolean HizTrace; // 0x11
		::System::Single RenderScale; // 0x14
		::System::Int32 RenderHeightClamp; // 0x18
		::System::Int32 NumSteps; // 0x1C
		::System::Int32 NumRays; // 0x20
		::System::Int32 NumResolve; // 0x24
		::System::Single RoughnessBias; // 0x28
		::System::Single ScreenFadeDist; // 0x2C
		::System::Boolean UsePreviousFrameColor; // 0x30
		::System::Boolean EnableSpatialFilter; // 0x31
		::System::Boolean EnableBilateralFilter; // 0x32
		::System::Single TemporalStaticWeight; // 0x34
		::System::Single TemporalDynamicWeight; // 0x38
		::System::Single Thickness; // 0x3C
	};
}
