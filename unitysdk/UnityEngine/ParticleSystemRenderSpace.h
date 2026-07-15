#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderSpace_TypeDefinitionIndex = 5762;

	enum class ParticleSystemRenderSpace : ::System::Int32
	{
		View = 0,
		World = 1,
		Local = 2,
		Facing = 3,
		Velocity = 4,
	};
}
