#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemTriggerEventType_TypeDefinitionIndex = 5500;

	enum class ParticleSystemTriggerEventType : ::System::Int32
	{
		Inside = 0,
		Outside = 1,
		Enter = 2,
		Exit = 3,
	};
}
