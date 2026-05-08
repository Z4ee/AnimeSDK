#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoStateManager_EmoState_TypeDefinitionIndex = 37728;

	enum class EmoStateManager_EmoState : ::System::Int32
	{
		INVALID = -1,
		BLENDING = 0,
		BLINKING = 1,
	};
}
