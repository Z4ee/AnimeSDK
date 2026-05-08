#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_EFinalPPSType_TypeDefinitionIndex = 30534;

	enum class PostProcessPass_EFinalPPSType : ::System::Int32
	{
		UberPost = 0,
		VREffects = 1,
		VRDistortion = 2,
	};
}
