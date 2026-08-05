#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractionManager_InteractiveObjectData_TypeDefinitionIndex = 27577;

	struct alignas(4) WaterInteractionManager_InteractiveObjectData
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single radius; // 0x1C
		::System::Single rippleIntensity; // 0x20
		::System::Single foamIntensity; // 0x24
		::System::Single interactionIntensity; // 0x28
		::System::Single isInWater; // 0x2C
	};
}
