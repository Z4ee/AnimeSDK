#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayState_TypeDefinitionIndex = 4902;

	enum class PlayState : ::System::Int32
	{
		Paused = 0,
		Playing = 1,
		Delayed = 2,
	};
}
