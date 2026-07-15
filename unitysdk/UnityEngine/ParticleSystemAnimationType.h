#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemAnimationType_TypeDefinitionIndex = 5770;

	enum class ParticleSystemAnimationType : ::System::Int32
	{
		WholeSheet = 0,
		SingleRow = 1,
	};
}
