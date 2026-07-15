#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumetricLightSettings_TypeDefinitionIndex = 4839;

	struct alignas(4) VolumetricLightSettings
	{
		::System::Single BilateralWeight; // 0x10
		::System::Single ResolutionScale; // 0x14
		::System::Int32 SortingLayerID; // 0x18
		::System::Int32 OrderInLayer; // 0x1C
	};
}
