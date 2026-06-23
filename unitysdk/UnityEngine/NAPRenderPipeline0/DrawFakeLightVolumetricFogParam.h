#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawFakeLightVolumetricFogParam_TypeDefinitionIndex = 5928;

	struct alignas(4) DrawFakeLightVolumetricFogParam
	{
		::UnityEngine::Vector4 lightFogParams; // 0x10
	};
}
