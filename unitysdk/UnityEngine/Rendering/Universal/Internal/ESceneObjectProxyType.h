#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ESceneObjectProxyType_TypeDefinitionIndex = 30418;

	enum class ESceneObjectProxyType : ::System::Int32
	{
		LightTrigger = 0,
		WeatherTrigger = 1,
		LightIntensityTrigger = 2,
		EmissionIntensityTrigger = 3,
		PlatformTrigger = 4,
	};
}
