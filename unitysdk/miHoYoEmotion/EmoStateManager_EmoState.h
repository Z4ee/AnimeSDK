#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoStateManager_EmoState_TypeDefinitionIndex = 40062;

	enum class EmoStateManager_EmoState : ::System::Int32
	{
		BLINKING = 1,
		BLENDING = 0,
		INVALID = -1,
	};
}
