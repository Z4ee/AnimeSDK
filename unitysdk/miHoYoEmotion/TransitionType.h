#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int TransitionType_TypeDefinitionIndex = 44821;

	enum class TransitionType : ::System::Int32
	{
		None = 0,
		Blend = 1,
		Post = 2,
	};
}
