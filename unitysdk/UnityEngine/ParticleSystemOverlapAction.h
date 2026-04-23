#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemOverlapAction_TypeDefinitionIndex = 5492;

	enum class ParticleSystemOverlapAction : ::System::Int32
	{
		Ignore = 0,
		Kill = 1,
		Callback = 2,
	};
}
