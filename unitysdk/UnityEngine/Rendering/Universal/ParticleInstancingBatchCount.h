#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ParticleInstancingBatchCount_TypeDefinitionIndex = 27285;

	enum class ParticleInstancingBatchCount : ::System::Int32
	{
		Middle = 150,
		Low = 50,
		High = 250,
	};
}
