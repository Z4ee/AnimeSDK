#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LightmapBakeType.h"
#include "unitysdk/UnityEngine/MixedLightingMode.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightBakingOutput_TypeDefinitionIndex = 4132;

	struct alignas(4) LightBakingOutput
	{
		::System::Int32 probeOcclusionLightIndex; // 0x10
		::System::Int32 occlusionMaskChannel; // 0x14
		::UnityEngine::LightmapBakeType lightmapBakeType; // 0x18
		::UnityEngine::MixedLightingMode mixedLightingMode; // 0x1C
		::System::Boolean isBaked; // 0x20
	};
}
