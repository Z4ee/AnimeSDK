#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemStopBehavior_TypeDefinitionIndex = 5776;

	enum class ParticleSystemStopBehavior : ::System::Int32
	{
		StopEmittingAndClear = 0,
		StopEmitting = 1,
	};
}
