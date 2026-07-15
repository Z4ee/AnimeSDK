#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int GPUParticlesPass_DispatchMode_TypeDefinitionIndex = 4104;

	enum class GPUParticlesPass_DispatchMode : ::System::Int32
	{
		FixedPerFrame = 0,
		NumParticles = 1,
		Once = 2,
		FixedInterval = 3,
		FromScript = 4,
	};
}
