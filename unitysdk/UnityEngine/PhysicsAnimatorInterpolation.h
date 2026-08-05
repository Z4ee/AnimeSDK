#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsAnimatorInterpolation_TypeDefinitionIndex = 7774;

	enum class PhysicsAnimatorInterpolation : ::System::Int32
	{
		None = 0,
		Interpolate = 1,
		Extrapolate = 2,
		DelayAnimEvaluationOnly = 3,
	};
}
