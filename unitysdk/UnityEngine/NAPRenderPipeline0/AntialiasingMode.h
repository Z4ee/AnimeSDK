#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int AntialiasingMode_TypeDefinitionIndex = 5870;

	enum class AntialiasingMode : ::System::Int32
	{
		None = 0,
		FastApproximateAntialiasing = 1,
		SubpixelMorphologicalAntiAliasing = 2,
		TemporalAntialiasing = 3,
		TAA_FXAA = 4,
		TAA_SMAA = 5,
		FSR2 = 6,
		DLSS = 7,
		FSR3 = 8,
	};
}
