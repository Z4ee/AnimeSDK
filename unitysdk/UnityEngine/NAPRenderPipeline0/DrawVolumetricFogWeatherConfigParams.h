#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawVolumetricFogWeatherConfigParams_TypeDefinitionIndex = 5927;

	struct alignas(4) DrawVolumetricFogWeatherConfigParams
	{
		::System::Single volumetricFog_Jittering; // 0x10
		::System::Single volumetricFog_Dithering; // 0x14
		::System::Single volumetricFogSize; // 0x18
		::UnityEngine::Vector4 _VolumetricFogParams; // 0x1C
		::UnityEngine::Color volumetricFog_Color; // 0x2C
		::System::Single volumetricFogExtraBlurRadius; // 0x3C
	};
}
