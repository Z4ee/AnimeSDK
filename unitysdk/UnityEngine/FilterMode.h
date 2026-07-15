#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FilterMode_TypeDefinitionIndex = 4158;

	enum class FilterMode : ::System::Int32
	{
		Point = 0,
		Bilinear = 1,
		Trilinear = 2,
	};
}
