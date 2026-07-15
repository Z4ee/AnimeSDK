#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int FormatUsage_TypeDefinitionIndex = 4923;

	enum class FormatUsage : ::System::Int32
	{
		Sample = 0,
		Linear = 1,
		Sparse = 2,
		Render = 4,
		Blend = 5,
		GetPixels = 6,
		SetPixels = 7,
		SetPixels32 = 8,
		ReadPixels = 9,
		LoadStore = 10,
		MSAA2x = 11,
		MSAA4x = 12,
		MSAA8x = 13,
		StencilSampling = 15,
	};
}
