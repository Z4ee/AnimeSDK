#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int DirectorUpdateMode_TypeDefinitionIndex = 6297;

	enum class DirectorUpdateMode : ::System::Int32
	{
		DSPClock = 0,
		GameTime = 1,
		UnscaledGameTime = 2,
		Manual = 3,
	};
}
