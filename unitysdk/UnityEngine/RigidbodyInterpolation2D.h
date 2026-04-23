#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodyInterpolation2D_TypeDefinitionIndex = 5191;

	enum class RigidbodyInterpolation2D : ::System::Int32
	{
		None = 0,
		Interpolate = 1,
		Extrapolate = 2,
	};
}
