#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BrightSpotsFlarePass_FlareParams_TypeDefinitionIndex = 26817;

	struct alignas(4) BrightSpotsFlarePass_FlareParams
	{
		::System::Single luminanceThreshold; // 0x10
		::System::Int32 regionPerThread; // 0x14
		::System::Single padding0; // 0x18
		::System::Single padding1; // 0x1C
	};
}
