#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_RTXAOMode_TypeDefinitionIndex = 30212;

	enum class RTXAOPass_RTXAOMode : ::System::Int32
	{
		Hardware = 0,
		Inline = 1,
		ScreenSpace = 2,
	};
}
