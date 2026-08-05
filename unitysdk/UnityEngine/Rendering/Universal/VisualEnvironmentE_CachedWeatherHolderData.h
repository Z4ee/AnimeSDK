#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_CachedWeatherHolderData_TypeDefinitionIndex = 27439;

	struct alignas(8) VisualEnvironmentE_CachedWeatherHolderData
	{
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* holder; // 0x10
		::UnityEngine::LayerMask cachedCameraLayerMask; // 0x18
	};
}
