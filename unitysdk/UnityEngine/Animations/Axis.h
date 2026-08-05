#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int Axis_TypeDefinitionIndex = 6695;

	enum class Axis : ::System::Int32
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 4,
	};
}
