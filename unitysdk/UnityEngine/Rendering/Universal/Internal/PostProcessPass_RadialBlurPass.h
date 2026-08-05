#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_RadialBlurPass_TypeDefinitionIndex = 26780;

	enum class PostProcessPass_RadialBlurPass : ::System::Int32
	{
		DownSampleQuarter = 1,
		DownSampleEighth = 2,
		RadialBlur = 3,
		Composite = 4,
		RadialBlurWithoutDownSample = 5,
		DownSampleHalf = 0,
	};
}
