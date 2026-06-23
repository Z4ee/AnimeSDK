#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ESceneObjectProxyType_TypeDefinitionIndex = 26568;

	enum class ESceneObjectProxyType : ::System::Int32
	{
		LightIntensityTrigger = 2,
		WeatherTrigger = 1,
		EmissionIntensityTrigger = 3,
		LightTrigger = 0,
		PlatformTrigger = 4,
	};
}
