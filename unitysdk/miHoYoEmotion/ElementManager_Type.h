#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ElementManager_Type_TypeDefinitionIndex = 40028;

	enum class ElementManager_Type : ::System::Int32
	{
		FRAME = 1,
		CLIP = 0,
		NONE = -1,
	};
}
