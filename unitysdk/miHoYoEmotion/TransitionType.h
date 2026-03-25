#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int TransitionType_TypeDefinitionIndex = 35132;

	enum class TransitionType : ::System::Int32
	{
		None = 0,
		Blend = 1,
		Post = 2,
	};
}
