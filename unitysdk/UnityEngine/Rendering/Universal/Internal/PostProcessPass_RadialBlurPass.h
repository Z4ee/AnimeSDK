#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_RadialBlurPass_TypeDefinitionIndex = 26705;

	enum class PostProcessPass_RadialBlurPass : ::System::Int32
	{
		DownSampleEighth = 2,
		RadialBlur = 3,
		DownSampleHalf = 0,
		RadialBlurWithoutDownSample = 5,
		DownSampleQuarter = 1,
		Composite = 4,
	};
}
