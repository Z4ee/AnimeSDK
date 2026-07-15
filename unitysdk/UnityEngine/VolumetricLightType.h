#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int VolumetricLightType_TypeDefinitionIndex = 4260;

	enum class VolumetricLightType : ::System::Int32
	{
		DirectionalVolume = 0,
		LocalLight = 1,
	};
}
