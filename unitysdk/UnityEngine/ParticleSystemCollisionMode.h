#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemCollisionMode_TypeDefinitionIndex = 5773;

	enum class ParticleSystemCollisionMode : ::System::Int32
	{
		Collision3D = 0,
		Collision2D = 1,
	};
}
