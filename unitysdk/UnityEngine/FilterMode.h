#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FilterMode_TypeDefinitionIndex = 3977;

	enum class FilterMode : ::System::Int32
	{
		Point = 0,
		Bilinear = 1,
		Trilinear = 2,
	};
}
