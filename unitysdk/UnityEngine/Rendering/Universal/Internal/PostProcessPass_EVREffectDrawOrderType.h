#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_EVREffectDrawOrderType_TypeDefinitionIndex = 26707;

	enum class PostProcessPass_EVREffectDrawOrderType : ::System::Int32
	{
		PreUberVREffectNoDistortion = 0,
		None = 1,
		PostUberVREffectWithVRDistortion = 3,
		PostUberVREffectNoDistortion = 2,
	};
}
