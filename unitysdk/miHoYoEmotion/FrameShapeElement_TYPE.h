#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShapeElement_TYPE_TypeDefinitionIndex = 40051;

	enum class FrameShapeElement_TYPE : ::System::Int32
	{
		MOUTH = 0,
		EYE_LEFT = 1,
		INVALID = -1,
		EYE_RIGHT = 2,
	};
}
