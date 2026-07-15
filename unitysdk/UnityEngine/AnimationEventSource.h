#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationEventSource_TypeDefinitionIndex = 5160;

	enum class AnimationEventSource : ::System::Int32
	{
		NoSource = 0,
		Legacy = 1,
		Animator = 2,
	};
}
