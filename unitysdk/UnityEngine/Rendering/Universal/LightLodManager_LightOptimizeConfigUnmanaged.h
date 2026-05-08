#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_LightOptimizeConfigUnmanaged_TypeDefinitionIndex = 30028;

	struct alignas(4) LightLodManager_LightOptimizeConfigUnmanaged
	{
		::System::Int32 featureToggleOptimizeOption; // 0x10
		::System::Int32 lightDistanceFadeOption; // 0x14
	};
}
