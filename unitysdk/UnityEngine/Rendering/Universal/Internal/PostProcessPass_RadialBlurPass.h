#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_RadialBlurPass_TypeDefinitionIndex = 30533;

	enum class PostProcessPass_RadialBlurPass : ::System::Int32
	{
		DownSampleHalf = 0,
		DownSampleQuarter = 1,
		DownSampleEighth = 2,
		RadialBlur = 3,
		Composite = 4,
		RadialBlurWithoutDownSample = 5,
	};
}
