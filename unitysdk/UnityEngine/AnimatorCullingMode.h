#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorCullingMode_TypeDefinitionIndex = 5130;

	enum class AnimatorCullingMode : ::System::Int32
	{
		AlwaysAnimate = 0,
		CullUpdateTransforms = 1,
		CullCompletely = 2,
	};
}
