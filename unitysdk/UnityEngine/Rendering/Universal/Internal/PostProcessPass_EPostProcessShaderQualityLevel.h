#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_EPostProcessShaderQualityLevel_TypeDefinitionIndex = 26710;

	enum class PostProcessPass_EPostProcessShaderQualityLevel : ::System::Int32
	{
		High = 2,
		Num = 3,
		Medium = 1,
		Low = 0,
	};
}
