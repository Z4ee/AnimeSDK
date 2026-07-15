#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int DLSSFeatureFlags_TypeDefinitionIndex = 5002;

	enum class DLSSFeatureFlags : ::System::Int32
	{
		None = 0,
		IsHDR = 1,
		MVLowRes = 2,
		MVJittered = 4,
		DepthInverted = 8,
		DoSharpening = 16,
	};
}
