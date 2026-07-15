#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaMeasureMode_TypeDefinitionIndex = 6125;

	enum class YogaMeasureMode : ::System::Int32
	{
		Undefined = 0,
		Exactly = 1,
		AtMost = 2,
	};
}
