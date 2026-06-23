#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int UpdateKodamaLightingParams_TypeDefinitionIndex = 5934;

	struct alignas(4) UpdateKodamaLightingParams
	{
		::UnityEngine::Color SkyColor; // 0x10
		::UnityEngine::Color MiddleColor; // 0x20
		::UnityEngine::Color GroundColor; // 0x30
		::System::Single SecondaryBounceIntensity; // 0x40
		::System::Single skyIndirectIntensity; // 0x44
		::System::Boolean isStaticLighting; // 0x48
		::System::Boolean refreshLocalLight; // 0x49
	};
}
