#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Axis_TypeDefinitionIndex = 41591;

	enum class Axis : ::System::Int32
	{
		Right = 0,
		Left = 1,
		Up = 2,
		Down = 3,
		Forward = 4,
		Backward = 5,
	};
}
