#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClusterLightingSettings_TypeDefinitionIndex = 4842;

	struct alignas(4) ClusterLightingSettings
	{
		::System::Int32 NumClusterX; // 0x10
		::System::Int32 NumClusterY; // 0x14
		::System::Int32 NumClusterZ; // 0x18
		::System::Int32 MaxLightPerCluster; // 0x1C
		::System::Int32 MaxLight; // 0x20
		::System::Single NearPlane; // 0x24
		::System::Single FarPlane; // 0x28
		::System::Single MinAreaPercent; // 0x2C
	};
}
