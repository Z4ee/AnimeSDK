#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableTraversalMode_TypeDefinitionIndex = 4898;

	enum class PlayableTraversalMode : ::System::Int32
	{
		Mix = 0,
		Passthrough = 1,
	};
}
