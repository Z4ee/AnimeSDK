#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BaseMarker_POST_TYPE_TypeDefinitionIndex = 42641;

	enum class BaseMarker_POST_TYPE : ::System::Int32
	{
		DEFAULT = 0,
		FORCE_NO_POST = 1,
		FORCE_POST = 2,
	};
}
