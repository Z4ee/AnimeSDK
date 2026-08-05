#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricCloudV2Quality_TypeDefinitionIndex = 27889;

	enum class VolumetricCloudV2Quality : ::System::Int32
	{
		High = 3,
		Ultra = 4,
		Medium = 2,
		Low = 1,
		Disabled = 0,
		Mobile = 5,
	};
}
