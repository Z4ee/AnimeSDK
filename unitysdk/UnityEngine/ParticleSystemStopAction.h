#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemStopAction_TypeDefinitionIndex = 5496;

	enum class ParticleSystemStopAction : ::System::Int32
	{
		None = 0,
		Disable = 1,
		Destroy = 2,
		Callback = 3,
	};
}
