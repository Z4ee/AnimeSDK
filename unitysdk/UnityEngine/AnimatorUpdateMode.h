#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorUpdateMode_TypeDefinitionIndex = 5131;

	enum class AnimatorUpdateMode : ::System::Int32
	{
		Normal = 0,
		AnimatePhysics = 1,
		UnscaledTime = 2,
	};
}
