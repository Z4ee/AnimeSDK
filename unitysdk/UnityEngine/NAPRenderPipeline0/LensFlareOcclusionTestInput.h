#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareOcclusionTestInput_TypeDefinitionIndex = 24696;

	struct alignas(4) LensFlareOcclusionTestInput
	{
		::UnityEngine::Vector3 positionSS; // 0x10
		::System::Single occlusionRadius; // 0x1C
		::System::Single sampleCount; // 0x20
		::System::Single occlusionOffScreen; // 0x24
		::System::Single contributeOffScreen; // 0x28
		::System::Single align; // 0x2C
	};
}
