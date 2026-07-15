#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeRefreshMode_TypeDefinitionIndex = 4705;

	enum class ReflectionProbeRefreshMode : ::System::Int32
	{
		OnAwake = 0,
		EveryFrame = 1,
		ViaScripting = 2,
	};
}
