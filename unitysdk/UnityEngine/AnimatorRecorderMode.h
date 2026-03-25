#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorRecorderMode_TypeDefinitionIndex = 5021;

	enum class AnimatorRecorderMode : ::System::Int32
	{
		Offline = 0,
		Playback = 1,
		Record = 2,
	};
}
