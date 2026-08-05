#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int URPProfileId_TypeDefinitionIndex = 5859;

	enum class URPProfileId : ::System::Int32
	{
		StopNaNs = 0,
		SMAA = 1,
		TAA = 2,
		FSR = 3,
		GaussianDepthOfField = 4,
		BokehDepthOfField = 5,
		MotionBlur = 6,
		PaniniProjection = 7,
		UberPostProcess = 8,
		Bloom = 9,
		LensFlareDataDriven = 10,
		GSR = 11,
	};
}
