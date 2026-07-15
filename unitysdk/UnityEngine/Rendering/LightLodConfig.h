#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightLodConfig_TypeDefinitionIndex = 4819;

	struct alignas(4) LightLodConfig
	{
		::System::Int32 lightLod; // 0x10
		::System::Single rangeMin; // 0x14
		::System::Single rangeMax; // 0x18
	};
}
