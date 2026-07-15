#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DeformationQuality.h"

namespace UnityEngine
{
	inline static constexpr unsigned int DeformationSetting_TypeDefinitionIndex = 4267;

	struct alignas(4) DeformationSetting
	{
		::System::Single MaxZExtent; // 0x10
		::System::Boolean EnableFill; // 0x14
		::System::Single FillRate; // 0x18
		::System::Single TessRange; // 0x1C
		::System::Single NeedTessTerrainNodeSize; // 0x20
		::System::Single NoiseTiling; // 0x24
		::System::Single TrailElevation; // 0x28
		::System::Single ElevationNoise; // 0x2C
		::System::Single DepressionNoise; // 0x30
		::System::Boolean CloseDeformationTiling; // 0x34
		::UnityEngine::DeformationQuality DeformationQualitySetting; // 0x38
	};
}
