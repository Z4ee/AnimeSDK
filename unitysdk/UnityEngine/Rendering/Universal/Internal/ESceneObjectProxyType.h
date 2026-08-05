#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ESceneObjectProxyType_TypeDefinitionIndex = 27926;

	enum class ESceneObjectProxyType : ::System::Int32
	{
		PlatformTrigger = 4,
		EmissionIntensityTrigger = 3,
		LightIntensityTrigger = 2,
		WeatherTrigger = 1,
		LightTrigger = 0,
	};
}
