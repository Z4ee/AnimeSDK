#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int UniversalAssetMainLightShadowParams_TypeDefinitionIndex = 5934;

	struct alignas(4) UniversalAssetMainLightShadowParams
	{
		::System::Single TintKernel; // 0x10
		::System::Single TintMaxReceiverDistance; // 0x14
		::System::Single TintDepthBias; // 0x18
		::System::Single TintNormalBias; // 0x1C
	};
}
