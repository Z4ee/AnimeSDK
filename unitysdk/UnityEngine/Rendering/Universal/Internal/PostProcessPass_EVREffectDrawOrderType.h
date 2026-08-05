#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_EVREffectDrawOrderType_TypeDefinitionIndex = 26785;

	enum class PostProcessPass_EVREffectDrawOrderType : ::System::Int32
	{
		None = 1,
		PostUberVREffectNoDistortion = 2,
		PreUberVREffectNoDistortion = 0,
		PostUberVREffectWithVRDistortion = 3,
	};
}
