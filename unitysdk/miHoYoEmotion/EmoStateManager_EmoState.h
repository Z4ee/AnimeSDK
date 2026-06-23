#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoStateManager_EmoState_TypeDefinitionIndex = 39393;

	enum class EmoStateManager_EmoState : ::System::Int32
	{
		BLENDING = 0,
		INVALID = -1,
		BLINKING = 1,
	};
}
