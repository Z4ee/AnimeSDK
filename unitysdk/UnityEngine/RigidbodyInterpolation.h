#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodyInterpolation_TypeDefinitionIndex = 5296;

	enum class RigidbodyInterpolation : ::System::Int32
	{
		None = 0,
		Interpolate = 1,
		Extrapolate = 2,
	};
}
