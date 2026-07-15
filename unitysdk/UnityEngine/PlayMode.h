#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PlayMode_TypeDefinitionIndex = 5162;

	enum class PlayMode : ::System::Int32
	{
		StopSameLayer = 0,
		StopAll = 4,
	};
}
