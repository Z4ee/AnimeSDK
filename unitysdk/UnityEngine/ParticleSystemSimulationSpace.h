#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemSimulationSpace_TypeDefinitionIndex = 5775;

	enum class ParticleSystemSimulationSpace : ::System::Int32
	{
		Local = 0,
		World = 1,
		Custom = 2,
	};
}
