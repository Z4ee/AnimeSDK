#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationPlayMode_TypeDefinitionIndex = 5165;

	enum class AnimationPlayMode : ::System::Int32
	{
		Stop = 0,
		Queue = 1,
		Mix = 2,
	};
}
