#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemCollisionType_TypeDefinitionIndex = 5772;

	enum class ParticleSystemCollisionType : ::System::Int32
	{
		Planes = 0,
		World = 1,
	};
}
