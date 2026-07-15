#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumetricCloudSphereSettings_TypeDefinitionIndex = 4838;

	struct alignas(4) VolumetricCloudSphereSettings
	{
		::System::Boolean Enable; // 0x10
		::System::Int32 Width; // 0x14
		::System::Int32 Height; // 0x18
		::System::Int32 MarchingSteps; // 0x1C
		::System::Single AccumulationFactor; // 0x20
	};
}
