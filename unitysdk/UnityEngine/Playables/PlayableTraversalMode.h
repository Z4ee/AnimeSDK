#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableTraversalMode_TypeDefinitionIndex = 6291;

	enum class PlayableTraversalMode : ::System::Int32
	{
		Mix = 0,
		Passthrough = 1,
	};
}
