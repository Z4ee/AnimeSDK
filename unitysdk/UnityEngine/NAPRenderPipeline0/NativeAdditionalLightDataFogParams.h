#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NativeAdditionalLightDataFogParams_TypeDefinitionIndex = 5925;

	struct alignas(4) NativeAdditionalLightDataFogParams
	{
		::System::Single FakeFogZOffset; // 0x10
		::System::Single FakeFogRange; // 0x14
		::System::Single FakeFogIntensityMultiply; // 0x18
	};
}
