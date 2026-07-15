#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ImagePosition_TypeDefinitionIndex = 5232;

	enum class ImagePosition : ::System::Int32
	{
		ImageLeft = 0,
		ImageAbove = 1,
		ImageOnly = 2,
		TextOnly = 3,
	};
}
