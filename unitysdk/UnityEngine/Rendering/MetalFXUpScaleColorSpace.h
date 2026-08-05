#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MetalFXUpScaleColorSpace_TypeDefinitionIndex = 6200;

	enum class MetalFXUpScaleColorSpace : ::System::Int32
	{
		Perceptual = 0,
		Linear = 1,
		HDR = 2,
	};
}
