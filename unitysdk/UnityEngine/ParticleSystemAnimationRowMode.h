#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemAnimationRowMode_TypeDefinitionIndex = 5771;

	enum class ParticleSystemAnimationRowMode : ::System::Int32
	{
		Custom = 0,
		Random = 1,
		MeshIndex = 2,
	};
}
