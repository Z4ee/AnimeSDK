#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int VRTextureUsage_TypeDefinitionIndex = 3985;

	enum class VRTextureUsage : ::System::Int32
	{
		None = 0,
		OneEye = 1,
		TwoEyes = 2,
		DeviceSpecific = 3,
	};
}
