#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemCurveMode_TypeDefinitionIndex = 5763;

	enum class ParticleSystemCurveMode : ::System::Int32
	{
		Constant = 0,
		Curve = 1,
		TwoCurves = 2,
		TwoConstants = 3,
	};
}
