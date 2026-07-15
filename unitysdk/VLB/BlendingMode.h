#pragma once
#include "unitysdk/unitysdk.h"

namespace VLB
{
	inline static constexpr unsigned int BlendingMode_TypeDefinitionIndex = 47149;

	enum class BlendingMode : ::System::Int32
	{
		Additive = 0,
		SoftAdditive = 1,
		TraditionalTransparency = 2,
		Overlay = 3,
	};
}
