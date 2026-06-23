#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SkyCoverTimeParams_TypeDefinitionIndex = 5922;

	struct alignas(4) SkyCoverTimeParams
	{
		::System::Single PreFrameTimer; // 0x10
		::System::Single Timer; // 0x14
	};
}
