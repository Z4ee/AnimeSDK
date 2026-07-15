#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int HorizontalWrapMode_TypeDefinitionIndex = 5030;

	enum class HorizontalWrapMode : ::System::Int32
	{
		Wrap = 0,
		Overflow = 1,
		Ellipsis = 2,
	};
}
