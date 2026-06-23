#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_RTXAOMode_TypeDefinitionIndex = 27008;

	enum class RTXAOPass_RTXAOMode : ::System::Int32
	{
		Inline = 1,
		Hardware = 0,
		ScreenSpace = 2,
	};
}
