#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricCloudV2Quality_TypeDefinitionIndex = 26286;

	enum class VolumetricCloudV2Quality : ::System::Int32
	{
		Disabled = 0,
		High = 3,
		Medium = 2,
		Mobile = 5,
		Ultra = 4,
		Low = 1,
	};
}
