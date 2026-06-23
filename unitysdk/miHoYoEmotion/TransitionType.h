#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int TransitionType_TypeDefinitionIndex = 39367;

	enum class TransitionType : ::System::Int32
	{
		Post = 2,
		None = 0,
		Blend = 1,
	};
}
