#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ColorSpace_TypeDefinitionIndex = 4156;

	enum class ColorSpace : ::System::Int32
	{
		Uninitialized = -1,
		Gamma = 0,
		Linear = 1,
	};
}
