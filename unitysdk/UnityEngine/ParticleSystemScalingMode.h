#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemScalingMode_TypeDefinitionIndex = 5777;

	enum class ParticleSystemScalingMode : ::System::Int32
	{
		Hierarchy = 0,
		Local = 1,
		Shape = 2,
	};
}
