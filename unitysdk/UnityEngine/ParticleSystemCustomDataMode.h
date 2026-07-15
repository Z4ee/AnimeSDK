#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemCustomDataMode_TypeDefinitionIndex = 5785;

	enum class ParticleSystemCustomDataMode : ::System::Int32
	{
		Disabled = 0,
		Vector = 1,
		Color = 2,
	};
}
