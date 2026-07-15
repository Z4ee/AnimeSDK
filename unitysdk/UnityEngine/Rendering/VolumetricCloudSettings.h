#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumetricCloudSettings_TypeDefinitionIndex = 4836;

	struct alignas(4) VolumetricCloudSettings
	{
		::System::Boolean Enable; // 0x10
		::System::Boolean UseHalfResolution; // 0x11
		::System::Boolean UseDownsampleAndReconstruction; // 0x12
		::System::Boolean UseAntiAliasing; // 0x13
		::System::Boolean UseSpatialFilter; // 0x14
		::System::Boolean UseSharpen; // 0x15
		::System::Single TemporalAccumulateFactor; // 0x18
		::System::Single SpatialFilterFactor; // 0x1C
		::System::Single SpatialFilterSize; // 0x20
		::System::Int32 MaxHeight; // 0x24
	};
}
