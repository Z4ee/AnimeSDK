#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ParticleInstancingBatchCount_TypeDefinitionIndex = 29827;

	enum class ParticleInstancingBatchCount : ::System::Int32
	{
		Low = 50,
		Middle = 150,
		High = 250,
	};
}
