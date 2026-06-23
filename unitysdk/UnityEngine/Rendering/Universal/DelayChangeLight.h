#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DADAC64B386D0C8E.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DelayChangeLight_TypeDefinitionIndex = 27302;

	struct alignas(8) DelayChangeLight
	{
		::Enum_3_DADAC64B386D0C8E delayOpt; // 0x10
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData; // 0x18
	};
}
