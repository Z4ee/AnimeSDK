#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemGameObjectFilter_TypeDefinitionIndex = 5793;

	enum class ParticleSystemGameObjectFilter : ::System::Int32
	{
		LayerMask = 0,
		List = 1,
		LayerMaskAndList = 2,
	};
}
