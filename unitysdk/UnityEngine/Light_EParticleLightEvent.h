#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int Light_EParticleLightEvent_TypeDefinitionIndex = 4135;

	enum class Light_EParticleLightEvent : ::System::Int32
	{
		OnStart = 0,
		OnEnd = 1,
	};
}
